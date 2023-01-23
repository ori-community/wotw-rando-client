#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_CrossSceneDependency_.h>
#include <Modloader/app/structs/CrossSceneDependency.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04762900, Dictionary_2_System_Int32_Moon_CrossSceneDependency__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ * this_ptr, int32_t key, app::CrossSceneDependency* value))
    IL2CPP_REGISTER_METHODINFO(0x04707ED8, Dictionary_2_System_Int32_Moon_CrossSceneDependency__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04716B68, Dictionary_2_System_Int32_Moon_CrossSceneDependency__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ * this_ptr, int32_t key, app::CrossSceneDependency** value))
    IL2CPP_REGISTER_METHODINFO(0x0478BD50, Dictionary_2_System_Int32_Moon_CrossSceneDependency__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_Moon_CrossSceneDependency_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768170, Dictionary_2_System_Int32_Moon_CrossSceneDependency___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_CrossSceneDependency_
