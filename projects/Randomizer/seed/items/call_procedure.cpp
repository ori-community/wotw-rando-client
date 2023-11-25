#include <randomizer.h>
#include <seed/items/call_procedure.h>

namespace randomizer::seed::items {
    void CallProcedure::grant() {
        game_seed().call_procedure(procedure);
    }

    std::string CallProcedure::to_string() {
        return std::format("call procedure {}", procedure);
    }
} // namespace randomizer::seed::items
