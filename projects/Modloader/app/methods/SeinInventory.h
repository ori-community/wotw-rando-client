#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinInventory {
    IL2CPP_REGISTER_METHOD(0x01014320, int32_t, get_Keystones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010143E0, void, set_Keystones, (app::SeinInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x010144B0, int32_t, get_AvailableKeystones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010144E0, int32_t, get_MapStones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010145A0, void, set_MapStones, (app::SeinInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01014670, app::PlayerUberStateInventory*, get_PlayerUberInventory, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01014720, int32_t, GetTotalAllocatedKeystones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01014890, int32_t, GetAllocatedKeystones, (app::SeinInventory * this_ptr, app::Object* requester))
    IL2CPP_REGISTER_METHOD(0x01014990, bool, AllocateKeystones, (app::SeinInventory * this_ptr, app::Object* requester, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x01014AF0, void, DeallocateKeystones, (app::SeinInventory * this_ptr, app::Object* requester, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x01014C70, bool, SetAllocatedKeystones, (app::SeinInventory * this_ptr, app::Object* requester, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x01014FD0, void, DeallocateAllKeystones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01015060, bool, get_HasKeystones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01015090, bool, get_HasMapstones, (app::SeinInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010150B0, void, SpendKeystones, (app::SeinInventory * this_ptr, int32_t cost))
    IL2CPP_REGISTER_METHOD(0x01015100, void, SpendMapstone, (app::SeinInventory * this_ptr, int32_t cost))
    IL2CPP_REGISTER_METHOD(0x01015150, void, CollectKeystones, (app::SeinInventory * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x01015180, void, CollectMapstone, (app::SeinInventory * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x010151B0, void, SetReferenceToSein, (app::SeinInventory * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x010151D0, void, ctor, (app::SeinInventory * this_ptr))
} // namespace app::classes::SeinInventory
