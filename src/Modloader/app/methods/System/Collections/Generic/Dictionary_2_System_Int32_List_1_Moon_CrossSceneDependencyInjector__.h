#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_.h>
#include <Modloader/app/structs/List_1_Moon_CrossSceneDependencyInjector_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector__ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_* this_ptr,
        int32_t key,
        app::List_1_Moon_CrossSceneDependencyInjector_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_* this_ptr,
        int32_t key,
        app::List_1_Moon_CrossSceneDependencyInjector_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::List_1_Moon_CrossSceneDependencyInjector_*,
        get_Item,
        app::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector__
