#include <cstdio>

// This code aims to demonstrate the newly discovered the
// template trampoline operator, which looks like a small
// person jumping off a trampoline.
//
// Trampoline:
//   data Trampoline a = More (() => Trampoline a) | Done a
//
// More trampolines:
//   https://en.wikipedia.org/wiki/Trampoline_(computing)
//
// (Some creative grouping may have been used)

// I know, using defines is cheating, but
// its only used for self reflection. So
// I will allow it.
#define X operator

template<int n, int x=0, int _=1>
struct Fib {
	constexpr Fib
		// Apply tadpole with hat operator
		// on iteration counter.
		//
		// tadpole operators:
		//   https://blogs.msdn.microsoft.com/oldnewthing/20150525-00/?p=45044
		//
		// (the hat it just for show)
		<~- n,
		// Roadkill chameleon operator. Chameleons with
		// their perfectly curly tail. Modify and transfer
		// state.
		_,x+_>
		// Its amazing face emoticon. Eyes closed and mouth
		// wide open. Conveys emotional state of author.
		X->()
		const {
			// Return the winking frog. Got to make
			// sure the tone of this code gets through
			// to the reader.
			return {};
		}
};

template<int x, int _>
struct Fib<0, x, _> {
	// Define o as x, could come handy if this piece
	// of code becomes self aware, and wants to
	// play tic-tac-toe before going mad. Hopefully this
	// will trap it in a logic loop.
	//
	// (it is not the "where tadpoles comes from" operator)
	static constexpr auto o=x;
	constexpr auto
		// I know, its amazing
		X->()
		// this is the result, so we return this
		const { return this; }
};

template<int n>
constexpr Fib<n> fib = {}; // Wink wink

// Adding some semantic sugar to make this
// analogy work a bit better. This works
// by making a some tiny trampoline art for
// the little person to jump off.
//
// (frogs everywhere)
struct TrampolineBlueprint {};
constexpr TrampolineBlueprint ___ = {};

template<typename typedecl>
constexpr auto
	// Sad long-nosed emoticon, author seems
	// to start questioning the both the humoristic and
	// the educational value of this code. Is it really
	// worth spending any time at all on this?
	X^(
	// boilerplate
	typedecl ____, decltype(___))
	// we need that trampoline
	{ return ____; }

int main() {
	constexpr auto result =
		// Setup the trampoline template monad, this one
		// calculates Fibonacci for n=14.
		//
		// (need to break closing > to make it work, turning it
		// 90 degrees counter clock wise will do it)
		fib<14^
		// Little person jumping off a trampoline operator,
		// this triggers the actual calculation using compile
		// time templates
		___ >->o;
	// Prefer printf, have you looked at the assembly
	// output when using cout instead?
	std::printf("%d\n", result);
	return 0;
}
