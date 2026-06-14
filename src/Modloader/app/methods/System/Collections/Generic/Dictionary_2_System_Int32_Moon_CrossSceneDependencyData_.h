#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneDependencyData.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_* this_ptr,
        int32_t key,
        app::CrossSceneDependencyData* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_
