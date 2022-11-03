#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ParameterByRefUpdater {
    IL2CPP_REGISTER_METHOD(0x0240CCB0, void, ctor, (app::ParameterByRefUpdater * this_ptr, app::LocalVariable* parameter, int32_t argument_index))
    IL2CPP_REGISTER_METHOD(0x0240CCC0, void, Update, (app::ParameterByRefUpdater * this_ptr, app::InterpretedFrame* frame, app::Object* value))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ParameterByRefUpdater
