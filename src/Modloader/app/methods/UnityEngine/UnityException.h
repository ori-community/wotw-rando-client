#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityException.h>

namespace app::classes::UnityEngine::UnityException {
    IL2CPP_REGISTER_METHOD(0x02C70AA0, void, ctor_1, app::UnityException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C70B60, void, ctor_2, app::UnityException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x02C70C20, void, ctor_3, app::UnityException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::UnityEngine::UnityException
