#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArrayByRefUpdater.h>
#include <Modloader/app/structs/LocalDefinition.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/LocalVariables.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ArrayByRefUpdater {
    IL2CPP_REGISTER_METHOD(0x022D5420, void, ctor, (app::ArrayByRefUpdater * this_ptr, app::LocalDefinition array, app::LocalDefinition index, int32_t argument_index))
    IL2CPP_REGISTER_METHOD(0x022D5440, void, Update, (app::ArrayByRefUpdater * this_ptr, app::InterpretedFrame* frame, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x022D5640, void, UndefineTemps, (app::ArrayByRefUpdater * this_ptr, app::InstructionList* instructions, app::LocalVariables* locals))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ArrayByRefUpdater
