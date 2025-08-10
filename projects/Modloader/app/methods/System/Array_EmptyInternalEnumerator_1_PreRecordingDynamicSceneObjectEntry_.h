#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D07CD0,
        app::PreRecordingDynamicSceneObjectEntry,
        get_Current,
        app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01CFED80,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_PreRecordingDynamicSceneObjectEntry_
