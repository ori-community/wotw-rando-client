#include <Core/core.h>
#include <Core/api/game/game.h>

#include <random>

namespace core {
    namespace {
        std::mt19937 random_generator; // NOLINT
        std::uniform_real_distribution<float> float_distribution = std::uniform_real_distribution<float>(0.0f, 1.0f);
    } // namespace

    void random_seed(int seed) {
        random_generator.seed(seed);
    }

    float random() {
        return float_distribution(random_generator);
    }

    int random(int start, int end) {
        std::uniform_int_distribution<int> distribution = std::uniform_int_distribution<int>(start, end);
        return distribution(random_generator);
    }
} // namespace core
