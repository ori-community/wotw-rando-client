#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_.h>

namespace app::classes::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01852930,
        app::Object*,
        Invoke,
        app::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::Object*,
        EndInvoke,
        app::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_
