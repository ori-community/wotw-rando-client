#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneDependency.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_CrossSceneDependency_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_* this_ptr,
        int32_t key,
        app::CrossSceneDependency* value
    )
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_* this_ptr,
        int32_t key,
        app::CrossSceneDependency** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependency_
