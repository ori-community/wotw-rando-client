#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericManagedEarlyZHierarchy.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::GenericManagedEarlyZHierarchy {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::GenericManagedEarlyZHierarchy* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E07C70,
        void,
        GetManagedEarlyZDynamicGraphicTargets,
        app::GenericManagedEarlyZHierarchy* this_ptr,
        app::List_1_UnityEngine_GameObject_* targets
    )
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GenericManagedEarlyZHierarchy* this_ptr)
} // namespace app::classes::GenericManagedEarlyZHierarchy
