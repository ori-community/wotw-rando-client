#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_.h>
#include <Modloader/app/structs/IEqualityComparer_1_Moon_CrossSceneReferenceId_.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02E291C0,
        void,
        set_Item,
        app::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_* this_ptr,
        app::CrossSceneReferenceId key,
        app::Object_1* value
    )
    IL2CPP_REGISTER_METHOD(0x02E2ADA0, bool, Remove, app::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_* this_ptr, app::CrossSceneReferenceId key)
    IL2CPP_REGISTER_METHOD(
        0x02E2B1D0,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_* this_ptr,
        app::CrossSceneReferenceId key,
        app::Object_1** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02E294C0,
        bool,
        ContainsKey,
        app::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_* this_ptr,
        app::CrossSceneReferenceId key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor,
        app::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_* this_ptr,
        app::IEqualityComparer_1_Moon_CrossSceneReferenceId_* comparer
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_CrossSceneReferenceId_UnityEngine_Object_
