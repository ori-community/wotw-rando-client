#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::Moon::CrossSceneReference {
    IL2CPP_REGISTER_METHOD(0x031BA200, void, AddCrossSceneObject, (app::CrossSceneReferenceId reference_id, app::Object_1* cross_scene_object))
    IL2CPP_REGISTER_METHOD(0x031BA300, void, RemoveCrossSceneObject, (app::CrossSceneReferenceId reference_id))
    IL2CPP_REGISTER_METHOD(0x031BA3D0, bool, TryGetCrossSceneReference, (app::CrossSceneReferenceId reference_id, app::Object_1** cross_scene_object))
    IL2CPP_REGISTER_METHOD(0x031BA520, bool, IsObjectWithGuidLoaded, (app::CrossSceneReferenceId reference_id))
    IL2CPP_REGISTER_METHOD(0x031BA610, void, cctor, ())
} // namespace app::classes::Moon::CrossSceneReference
