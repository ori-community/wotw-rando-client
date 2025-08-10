#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CallInstruction.h>
#include <Modloader/app/structs/LightLambda.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CallInstruction {
    IL2CPP_REGISTER_METHOD(0x022D75B0, app::String*, get_InstructionName, app::CallInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D7630, app::CallInstruction*, Create_1, app::MethodInfo_1* info)
    IL2CPP_REGISTER_METHOD(0x022D76E0, app::CallInstruction*, Create_2, app::MethodInfo_1* info, app::ParameterInfo_1__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x022D7980, app::CallInstruction*, GetArrayAccessor, app::MethodInfo_1* info, int32_t argument_count)
    IL2CPP_REGISTER_METHOD(0x022D8040, void, ArrayItemSetter1, app::Array* array, int32_t index0, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x022D8070, void, ArrayItemSetter2, app::Array* array, int32_t index0, int32_t index1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x022D80A0, void, ArrayItemSetter3, app::Array* array, int32_t index0, int32_t index1, int32_t index2, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x008009A0, int32_t, get_ConsumedStack, app::CallInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D80E0, bool, TryGetLightLambdaTarget, app::Object* instance, app::LightLambda** light_lambda)
    IL2CPP_REGISTER_METHOD(
        0x022D8230,
        app::Object*,
        InterpretLambdaInvoke,
        app::CallInstruction* this_ptr,
        app::LightLambda* target_lambda,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CallInstruction* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::CallInstruction
