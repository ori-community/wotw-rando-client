#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/stack_push.h>

INSTRUCTION_DERIVE(StackPushInteger, StackPush, int)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<StackPushInteger>();
    }
};

