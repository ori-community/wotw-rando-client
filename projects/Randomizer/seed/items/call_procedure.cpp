#include <randomizer.h>
#include <seed/items/call_procedure.h>

namespace randomizer::seed::items {
    void CallProcedure::grant() {
        game_seed().call_procedure(procedure);
    }
} // namespace randomizer::seed::items
