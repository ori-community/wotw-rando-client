#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/stack_copy.h>

INSTRUCTION_DERIVE(StackCopyInteger, StackCopy, int)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<StackCopyInteger>(j.get<std::size_t>());
    }
};

