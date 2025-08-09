#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyByRefUpdater.h>
#include <Modloader/app/structs/PropertyInfo_1.h>

namespace app::classes::System::Linq::Expressions::Interpreter::PropertyByRefUpdater {
    IL2CPP_REGISTER_METHOD(
        0x022E5C20,
        void,
        ctor,
        app::PropertyByRefUpdater* this_ptr,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj,
        app::PropertyInfo_1* property,
        int32_t argument_index
    )
    IL2CPP_REGISTER_METHOD(0x0240D130, void, Update, app::PropertyByRefUpdater* this_ptr, app::InterpretedFrame* frame, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x0240D270,
        void,
        UndefineTemps,
        app::PropertyByRefUpdater* this_ptr,
        app::InstructionList* instructions,
        app::LocalVariables* locals
    )
} // namespace app::classes::System::Linq::Expressions::Interpreter::PropertyByRefUpdater
