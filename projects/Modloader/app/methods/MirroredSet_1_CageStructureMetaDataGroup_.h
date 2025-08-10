#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#include <Modloader/app/structs/MirroredSet_1_CageStructureMetaDataGroup_.h>

namespace app::classes::MirroredSet_1_CageStructureMetaDataGroup_ {
    IL2CPP_REGISTER_METHOD(
        0x019FA1B0,
        app::CageStructureMetaDataGroup*,
        GetItem,
        app::MirroredSet_1_CageStructureMetaDataGroup_* this_ptr,
        float look_direction
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::MirroredSet_1_CageStructureMetaDataGroup_* this_ptr)
} // namespace app::classes::MirroredSet_1_CageStructureMetaDataGroup_
