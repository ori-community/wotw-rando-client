#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/EntityBehaviourCageMetaData.h>

namespace app::classes::EntityBehaviourCageMetaData {
    IL2CPP_REGISTER_METHOD(0x00C8C800, void, OnEnable, app::EntityBehaviourCageMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8C9B0, void, OnDisable, app::EntityBehaviourCageMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8CB60, void, FaceAdded, app::EntityBehaviourCageMetaData* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x00C8CCA0, void, ctor, app::EntityBehaviourCageMetaData* this_ptr)
} // namespace app::classes::EntityBehaviourCageMetaData
