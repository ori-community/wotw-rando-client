#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/StrippableBuildContex.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UberInteractionActor {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::UberWaterControl*, get_Water, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Water, (app::UberInteractionActor * this_ptr, app::UberWaterControl* value))
    IL2CPP_REGISTER_METHOD(0x013F5F10, bool, get_CanProduceSplashes, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F5F30, int32_t, get_ActorId, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, GetPrewarmAmount, (app::UberInteractionActor * this_ptr, app::GameObject* entry))
    IL2CPP_REGISTER_METHOD(0x013F5F70, void, Awake, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F6210, void, OnEnable, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F64F0, void, Start, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F65D0, void, UpdateRadiusFromSphere, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F6990, void, OnDisable, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F6AD0, void, OnWaterEnter, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F6E00, void, OnWaterExit, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8D820, void, Teleport, (app::UberInteractionActor * this_ptr, app::Vector3 actor_pos))
    IL2CPP_REGISTER_METHOD(0x013F6F20, void, InteractionUpdate, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F7260, void, OnPoolSpawned, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F7320, void, SetCooldown, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F7330, void, CacheSphereCollider, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F73C0, bool, ValidForStripping, (app::UberInteractionActor * this_ptr, app::StrippableBuildContex context))
    IL2CPP_REGISTER_METHOD(0x00615270, bool, DoStrip, (app::UberInteractionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F73D0, void, ctor, (app::UberInteractionActor * this_ptr))
} // namespace app::classes::UberInteractionActor
