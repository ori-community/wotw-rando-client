#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UpgradableShardItem_.h>
#include <Modloader/app/structs/UpgradableShardItem.h>
#include <Modloader/app/structs/UpgradableShardItem__Array.h>

namespace app::classes::System::Collections::Generic::List_1_UpgradableShardItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UpgradableShardItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A8C0, List_1_UpgradableShardItem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UpgradableShardItem_ * this_ptr, app::UpgradableShardItem* item))
    IL2CPP_REGISTER_METHODINFO(0x04796F68, List_1_UpgradableShardItem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::UpgradableShardItem__Array*, ToArray, (app::List_1_UpgradableShardItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790220, List_1_UpgradableShardItem__ToArray__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UpgradableShardItem_
