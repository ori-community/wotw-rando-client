#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/IEnumerable_1_SystemIntegration_CacheData_.h>
#include <Modloader/app/structs/List_1_SystemIntegration_CacheData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SystemIntegration_CacheData_.h>

namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_CacheData_ {
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::CacheData__Array*, ToArray, (app::List_1_SystemIntegration_CacheData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SystemIntegration_CacheData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SystemIntegration_CacheData_ * this_ptr, app::CacheData* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SystemIntegration_CacheData_, GetEnumerator, (app::List_1_SystemIntegration_CacheData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SystemIntegration_CacheData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_SystemIntegration_CacheData_ * this_ptr, app::IEnumerable_1_SystemIntegration_CacheData_* collection))
} // namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_CacheData_
