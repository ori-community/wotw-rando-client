#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IFrustumOptimizable.h>
#include <Modloader/app/structs/AllContainer_1_IFrustumOptimizable_.h>
#include <Modloader/app/structs/List_1_IFrustumOptimizable_.h>

namespace app::classes::AllContainer_1_IFrustumOptimizable_ {
    IL2CPP_REGISTER_METHOD(0x019D7800, app::IFrustumOptimizable*, get_Item, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04769AF8, AllContainer_1_IFrustumOptimizable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B0F0, AllContainer_1_IFrustumOptimizable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr, app::IFrustumOptimizable* item))
    IL2CPP_REGISTER_METHODINFO(0x04779C98, AllContainer_1_IFrustumOptimizable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr, app::IFrustumOptimizable* item))
    IL2CPP_REGISTER_METHODINFO(0x04748D08, AllContainer_1_IFrustumOptimizable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_IFrustumOptimizable_*, RawList, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D6B0, AllContainer_1_IFrustumOptimizable__RawList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758C88, AllContainer_1_IFrustumOptimizable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_IFrustumOptimizable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728FF0, AllContainer_1_IFrustumOptimizable___ctor__MethodInfo)
} // namespace app::classes::AllContainer_1_IFrustumOptimizable_
