#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Type_Newtonsoft_Json_Utilities_ReflectionObject_.h>
#include <Modloader/app/structs/ReflectionObject.h>
#include <Modloader/app/structs/ThreadSafeStore_2_System_Type_ReflectionObject_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::ThreadSafeStore_2_System_Type_ReflectionObject_ {
    IL2CPP_REGISTER_METHOD(0x01D122F0, app::ReflectionObject*, Get, app::ThreadSafeStore_2_System_Type_ReflectionObject_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(
        0x01D12150,
        void,
        ctor,
        app::ThreadSafeStore_2_System_Type_ReflectionObject_* this_ptr,
        app::Func_2_Type_Newtonsoft_Json_Utilities_ReflectionObject_* creator
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::ThreadSafeStore_2_System_Type_ReflectionObject_
