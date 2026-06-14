#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer.h>

namespace app::classes::Moon::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer {
    IL2CPP_REGISTER_METHOD(
        0x02B605C0,
        bool,
        Equals,
        app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer* this_ptr,
        app::CrossSceneReferenceId x,
        app::CrossSceneReferenceId y
    )
    IL2CPP_REGISTER_METHOD(
        0x031BB050,
        int32_t,
        GetHashCode,
        app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer* this_ptr,
        app::CrossSceneReferenceId obj
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer* this_ptr)
} // namespace app::classes::Moon::CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer
