#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IFrustumOptimizable.h>
#include <Modloader/app/structs/List_1_IFrustumOptimizable_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_IFrustumOptimizable_.h>
#include <Modloader/app/structs/Predicate_1_IFrustumOptimizable_.h>

namespace app::classes::System::Collections::Generic::List_1_IFrustumOptimizable_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IFrustumOptimizable*, get_Item, app::List_1_IFrustumOptimizable_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_IFrustumOptimizable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_IFrustumOptimizable_* this_ptr, app::IFrustumOptimizable* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_IFrustumOptimizable_* this_ptr, app::IFrustumOptimizable* item)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IFrustumOptimizable_, GetEnumerator, app::List_1_IFrustumOptimizable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_IFrustumOptimizable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_IFrustumOptimizable_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, app::List_1_IFrustumOptimizable_* this_ptr, app::Predicate_1_IFrustumOptimizable_* match)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_IFrustumOptimizable_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_IFrustumOptimizable_
