#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::PropertyByRefUpdater {
    IL2CPP_REGISTER_METHOD(0x022E5C20, void, ctor, (app::PropertyByRefUpdater * this_ptr, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj, app::PropertyInfo_1* property, int32_t argument_index))
    IL2CPP_REGISTER_METHOD(0x0240D130, void, Update, (app::PropertyByRefUpdater * this_ptr, app::InterpretedFrame* frame, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047862E8, PropertyByRefUpdater_Update__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0240D270, void, UndefineTemps, (app::PropertyByRefUpdater * this_ptr, app::InstructionList* instructions, app::LocalVariables* locals))
} // namespace app::classes::System::Linq::Expressions::Interpreter::PropertyByRefUpdater
