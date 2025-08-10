#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArgumentCache.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Events::ArgumentCache {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Object_1*, get_unityObjectArgument, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F25880, app::String*, get_unityObjectArgumentAssemblyTypeName, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1C70, int32_t, get_intArgument, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0242E6A0, float, get_floatArgument, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::String*, get_stringArgument, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_boolArgument, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0242E6C0, void, TidyAssemblyTypeName, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0242E920, void, OnBeforeSerialize, app::ArgumentCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0242E920, void, OnAfterDeserialize, app::ArgumentCache* this_ptr)
} // namespace app::classes::UnityEngine::Events::ArgumentCache
