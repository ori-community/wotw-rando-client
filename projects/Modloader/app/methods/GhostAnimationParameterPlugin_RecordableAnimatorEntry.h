#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#include <Modloader/app/structs/IRecordable.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__2.h>

namespace app::classes::GhostAnimationParameterPlugin_RecordableAnimatorEntry {
    IL2CPP_REGISTER_METHOD(0x00E14150, app::IRecordable*, get_Recordable, app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E141E0,
        void,
        ctor,
        app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* this_ptr,
        app::GlobalRecordingTable_RecordableEntry* target
    )
    IL2CPP_REGISTER_METHOD(0x00E14570, void, Refresh, app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E14B80, bool, HasChanged, app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E14CC0,
        void,
        FillWithChangedParameters,
        app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* this_ptr,
        app::List_1_System_Tuple_2__1* float_parameters,
        app::List_1_System_Tuple_2__2* vector_parameters
    )
} // namespace app::classes::GhostAnimationParameterPlugin_RecordableAnimatorEntry
