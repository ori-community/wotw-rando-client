#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/CrossSceneReferenceId__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_ {
    IL2CPP_REGISTER_METHOD(
        0x02658EC0,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr,
        app::CrossSceneReferenceId x,
        app::CrossSceneReferenceId y
    )
    IL2CPP_REGISTER_METHOD(
        0x02658F20,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr,
        app::CrossSceneReferenceId obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02658F50,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr,
        app::CrossSceneReferenceId__Array* array,
        app::CrossSceneReferenceId value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02659050,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr,
        app::CrossSceneReferenceId__Array* array,
        app::CrossSceneReferenceId value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_CrossSceneReferenceId_
