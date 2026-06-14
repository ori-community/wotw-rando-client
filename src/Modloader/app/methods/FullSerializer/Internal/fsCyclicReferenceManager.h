#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsCyclicReferenceManager.h>

namespace app::classes::FullSerializer::Internal::fsCyclicReferenceManager {
    IL2CPP_REGISTER_METHOD(0x0131C5E0, void, Enter, app::fsCyclicReferenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01651700, bool, Exit, app::fsCyclicReferenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01651A00, app::Object*, GetReferenceObject, app::fsCyclicReferenceManager* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01651B30, void, AddReferenceWithId, app::fsCyclicReferenceManager* this_ptr, int32_t id, app::Object* reference)
    IL2CPP_REGISTER_METHOD(0x01651BF0, int32_t, GetReferenceId, app::fsCyclicReferenceManager* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01651D40, bool, IsReference, app::fsCyclicReferenceManager* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01651E10, void, MarkSerialized, app::fsCyclicReferenceManager* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01651F70, void, ctor, app::fsCyclicReferenceManager* this_ptr)
} // namespace app::classes::FullSerializer::Internal::fsCyclicReferenceManager
