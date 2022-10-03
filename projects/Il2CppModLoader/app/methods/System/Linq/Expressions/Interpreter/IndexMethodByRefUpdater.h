#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater {
    IL2CPP_REGISTER_METHOD(0x01CD5D00, void, ctor, (app::IndexMethodByRefUpdater * this_ptr, app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj, app::LocalDefinition__Array* args, app::MethodInfo_1* indexer, int32_t argument_index))
    IL2CPP_REGISTER_METHOD(0x01CD5D30, void, Update, (app::IndexMethodByRefUpdater * this_ptr, app::InterpretedFrame* frame, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04711A28, IndexMethodByRefUpdater_Update__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CD6000, void, UndefineTemps, (app::IndexMethodByRefUpdater * this_ptr, app::InstructionList* instructions, app::LocalVariables* locals))
} // namespace app::classes::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater
