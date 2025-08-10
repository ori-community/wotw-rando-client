#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/StringCageMetaData.h>

namespace app::classes::StringCageMetaData {
    IL2CPP_REGISTER_METHOD(0x00670E00, void, OnEnable, app::StringCageMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00670FB0, void, OnDisable, app::StringCageMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00671160, void, FaceAdded, app::StringCageMetaData* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x006712A0, void, ctor, app::StringCageMetaData* this_ptr)
} // namespace app::classes::StringCageMetaData
