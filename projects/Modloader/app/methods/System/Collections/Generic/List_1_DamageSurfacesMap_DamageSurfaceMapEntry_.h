#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry.h>
#include <Modloader/app/structs/List_1_DamageSurfacesMap_DamageSurfaceMapEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_DamageSurfacesMap_DamageSurfaceMapEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::DamageSurfacesMap_DamageSurfaceMapEntry*,
        get_Item,
        app::List_1_DamageSurfacesMap_DamageSurfaceMapEntry_* this_ptr,
        int32_t index
    )
}
