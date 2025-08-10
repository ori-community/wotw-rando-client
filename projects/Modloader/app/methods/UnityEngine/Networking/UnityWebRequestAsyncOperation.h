#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityWebRequest.h>
#include <Modloader/app/structs/UnityWebRequestAsyncOperation.h>

namespace app::classes::UnityEngine::Networking::UnityWebRequestAsyncOperation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnityWebRequestAsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_webRequest, app::UnityWebRequestAsyncOperation* this_ptr, app::UnityWebRequest* value)
} // namespace app::classes::UnityEngine::Networking::UnityWebRequestAsyncOperation
