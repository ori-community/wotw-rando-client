#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/stack_push.h>

INSTRUCTION_DERIVE(StackPushString, StackPush, std::string)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<StackPushString>();
    }
};

