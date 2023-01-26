#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValu_Enumerato_SpiderBossBaseBehaviou_SpiderBossEntit_ExecuteAttackInf_.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_, GetEnumerator, (app::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_ * this_ptr, app::SpiderBossBaseBehaviour* key, app::SpiderBossEntity_ExecuteAttackInfo** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_
