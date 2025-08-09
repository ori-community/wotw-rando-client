#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicGraphicHierarchy.h>

namespace app::classes::DynamicGraphicHierarchy {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DynamicGraphicHierarchy* this_ptr)
}
