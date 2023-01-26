#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MokiNPCPlaceholder.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::MokiNPCPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01331810, void, InstantiateFromPooledObj, (app::MokiNPCPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01331A40, void, Spawn, (app::MokiNPCPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01331B90, void, ProcessIsOnBridge, (app::MokiNPCPlaceholder * this_ptr, app::Entity* moki_entity))
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, (app::MokiNPCPlaceholder * this_ptr))
} // namespace app::classes::MokiNPCPlaceholder
