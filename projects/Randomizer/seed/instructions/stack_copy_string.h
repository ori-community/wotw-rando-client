#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/stack_copy.h>

INSTRUCTION_DERIVE(StackCopyString, StackCopy, std::string)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<StackCopyString>(j.get<std::size_t>());
    }
};

