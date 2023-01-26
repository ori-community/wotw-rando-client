#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_KwolokBossWormSpitBehaviour_WormInfo_.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo.h>
#include <Modloader/app/structs/List_1_KwolokBossWormSpitBehaviour_WormInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_KwolokBossWormSpitBehaviour_WormInfo_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_KwolokBossWormSpitBehaviour_WormInfo_, GetEnumerator, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr, app::KwolokBossWormSpitBehaviour_WormInfo* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::KwolokBossWormSpitBehaviour_WormInfo*, get_Item, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_KwolokBossWormSpitBehaviour_WormInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_KwolokBossWormSpitBehaviour_WormInfo_
