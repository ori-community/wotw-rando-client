#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IndexMethodByRefUpdater.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LocalDefinition__Array.h>
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater {
    IL2CPP_REGISTER_METHOD(
        0x01CD5D00,
        void,
        ctor,
        app::IndexMethodByRefUpdater* this_ptr,
        app::Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj,
        app::LocalDefinition__Array* args,
        app::MethodInfo_1* indexer,
        int32_t argument_index
    )
    IL2CPP_REGISTER_METHOD(0x01CD5D30, void, Update, app::IndexMethodByRefUpdater* this_ptr, app::InterpretedFrame* frame, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x01CD6000,
        void,
        UndefineTemps,
        app::IndexMethodByRefUpdater* this_ptr,
        app::InstructionList* instructions,
        app::LocalVariables* locals
    )
} // namespace app::classes::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater
