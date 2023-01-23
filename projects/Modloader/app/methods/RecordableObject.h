#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#include <Modloader/app/structs/RecordableObject.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::RecordableObject {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::RecordableObjectPuppet*, get_Puppet, (app::RecordableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736350, void, Awake, (app::RecordableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::RecordableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736360, void, CreatePuppet, (app::RecordableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::RecordableObject * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RecordableObject * this_ptr))
} // namespace app::classes::RecordableObject
