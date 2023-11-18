#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IPoolableTimelineEntity.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::Timeline::VirtualTimelineEntityPool {
    IL2CPP_REGISTER_METHOD(0x01E92C90, void, ReturnToPool, (app::VirtualTimelineEntityPool * this_ptr, app::IPoolableTimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01E92EE0, void, ctor, (app::VirtualTimelineEntityPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B34C30, bool, TryToGetEntity, (app::VirtualTimelineEntityPool * this_ptr, app::IContext* reset_context, app::Object** entity))
} // namespace app::classes::Moon::Timeline::VirtualTimelineEntityPool
