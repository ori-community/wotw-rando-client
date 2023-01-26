#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericPoser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>

namespace app::classes::RootMotion::FinalIK::GenericPoser {
    IL2CPP_REGISTER_METHOD(0x02064540, void, AutoMapping, (app::GenericPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064960, void, StoreDefaultState, (app::GenericPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020649F0, void, FixTransforms, (app::GenericPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064B70, app::Transform*, GetTargetNamed, (app::GenericPoser * this_ptr, app::String* t_name, app::Transform__Array* array))
    IL2CPP_REGISTER_METHOD(0x02064C40, void, LateUpdate, (app::GenericPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064DB0, void, ctor, (app::GenericPoser * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::GenericPoser
