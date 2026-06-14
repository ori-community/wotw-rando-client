#include <Randomizer/seed/memory.h>


namespace randomizer::seed::memory {
    void MemoryLayer::clear() {
        booleans.clear();
        integers.clear();
        floats.clear();
        strings.clear();
    }

    void Stack::clear() {
        frame_pointer = 0;
        frames.clear();
    }

    MemoryLayer& Stack::current_frame() {
        return frames.at(frame_pointer);
    }

    const MemoryLayer& Stack::current_frame() const {
        return frames.at(frame_pointer);
    }

    void Stack::push_frame() {
        ++frame_pointer;

        if (frame_pointer >= frames.size()) {
            frames.resize(frame_pointer + 1);
        }

        frames[frame_pointer].clear();
    }

    void Stack::pop_frame() {
        --frame_pointer;
    }

    void SeedMemory::clear() {
        heap.clear();
        stack.clear();
    }
} // namespace randomizer::seed::memory
