#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/UnassignedReferenceException.h>

namespace app::classes::UnityEngine::UnassignedReferenceException {
    IL2CPP_REGISTER_METHOD(0x02C705A0, void, ctor_1, app::UnassignedReferenceException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C70660, void, ctor_2, app::UnassignedReferenceException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::UnityEngine::UnassignedReferenceException
