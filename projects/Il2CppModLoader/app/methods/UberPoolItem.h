#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPoolItem {
    IL2CPP_REGISTER_METHOD(0x00FD5D20, bool, get_IsFree, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDestroyed, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD5D90, void, OnSpawned, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD6020, void, SetActive, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD6180, void, OnDespawn, (app::UberPoolItem * this_ptr, app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00FD64C0, void, ResetPosition, (app::UberPoolItem * this_ptr, app::Transform * trans))
    IL2CPP_REGISTER_METHOD(0x00FD6820, void, OnNewlyCreated, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD6BC0, void, OnDecease, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD6BF0, void, CheckNotDeceased, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD6C00, void, ReportAlreadyDeceased, (app::UberPoolItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779570, UberPoolItem_ReportAlreadyDeceased__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FD6D00, void, AddStateRecurs, (app::UberPoolItem * this_ptr, app::Transform * trans, app::List_1_UnityEngine_GameObject_ * active_at_start, app::List_1_UnityEngine_Transform_ * children))
    IL2CPP_REGISTER_METHOD(0x00FD7290, void, AddEntryRecurs, (app::UberPoolItem * this_ptr, app::Dictionary_2_System_Int32_UberPoolItem_ * add, app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00FD7550, void, AddEntries, (app::UberPoolItem * this_ptr, app::Dictionary_2_System_Int32_UberPoolItem_ * spawned_to_item))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, SetExplicitDestroy, (app::UberPoolItem * this_ptr, bool destroyed))
    IL2CPP_REGISTER_METHOD(0x00FD7560, void, ctor, (app::UberPoolItem * this_ptr))
}
