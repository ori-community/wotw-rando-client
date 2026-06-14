#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldByRefUpdater.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::FieldByRefUpdater {
    IL2CPP_REGISTER_METHOD(
        0x022E5C20,
        void,
        ctor,
        app::FieldByRefUpdater* this_ptr,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj,
        app::FieldInfo_1* field,
        int32_t argument_index
    )
    IL2CPP_REGISTER_METHOD(0x022E5C40, void, Update, app::FieldByRefUpdater* this_ptr, app::InterpretedFrame* frame, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x022E5D70, void, UndefineTemps, app::FieldByRefUpdater* this_ptr, app::InstructionList* instructions, app::LocalVariables* locals)
} // namespace app::classes::System::Linq::Expressions::Interpreter::FieldByRefUpdater
