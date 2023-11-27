#include <randomizer.h>
#include <seed/items/call_procedure.h>

namespace randomizer::seed::items {
    void CallProcedure::grant() {
        game_seed().procedure_call(procedure);
    }

    std::string CallProcedure::to_string() const {
        const auto data = game_seed().procedure_data(procedure);
        if (!data.has_value()) {
            return std::format("call unknown procedure {}", procedure);
        }

        if (!data.value().items.empty()) {
            return std::format("call empty procedure {}", procedure);
        }

        // First item should hold the full string used to generate the procedure.
        const auto item = data.value().items.begin()->second;
        return std::format("call procedure {} at line {}: {}", procedure, item->seed_line_number, item->seed_definition);
    }
} // namespace randomizer::seed::items
