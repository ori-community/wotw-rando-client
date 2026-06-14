#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionSequence__Array.h>
#include <Modloader/app/structs/AudioClip__Array.h>
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/Entity__Array.h>
#include <Modloader/app/structs/EnvironmentLight__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot__Array.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache__Array.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/SceneRoot__Array.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D__Array.h>
#include <Modloader/app/structs/Texture__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::FindObjectsWrapper {
    IL2CPP_REGISTER_METHOD(0x02559930, app::Object_1__Array*, FindObjectsOfType_1, app::Type* t, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x02559A80, app::Object_1__Array*, FindObjectsOfTypeAll_1, app::Type* t, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x02559BB0, app::GameObject*, Find, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02559DD0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x02559E90, void, HierarchyChanged, )
    IL2CPP_REGISTER_METHOD(0x02559F50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01586160, app::Object__Array*, FindObjectsOfType_2, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::Object__Array*, FindObjectsOfTypeAll_2, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015863E0, app::Object__Array*, FindObjectsOfTypeAllFast_1, )
    IL2CPP_REGISTER_METHOD(0x015F1AC0, app::Object*, FindSceneObjectOfTypeFast, )
    IL2CPP_REGISTER_METHOD(0x01550160, void, CollectObjectsRecursively, app::Transform* trans, app::List_1_System_Object_* result)
    IL2CPP_REGISTER_METHOD(0x015F1830, app::Object*, CollectSceneObjectRecursively, app::Transform* trans)
    IL2CPP_REGISTER_METHOD(0x01586160, app::HierarchyPerfTestsSceneRoot__Array*, FindObjectsOfType_3, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::Entity__Array*, FindObjectsOfTypeAll_3, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x01586160, app::EnvironmentLight__Array*, FindObjectsOfType_4, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x01586160, app::GameObject__Array*, FindObjectsOfType_5, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x01586160, app::ParticleSystem__Array*, FindObjectsOfType_6, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015863E0, app::EntityPlaceholder__Array*, FindObjectsOfTypeAllFast_2, )
    IL2CPP_REGISTER_METHOD(0x015862B0, app::GameObject__Array*, FindObjectsOfTypeAll_4, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::LightCanvasEditorTextureCache__Array*, FindObjectsOfTypeAll_5, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::SkinnedMeshRenderer__Array*, FindObjectsOfTypeAll_6, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::Texture2D__Array*, FindObjectsOfTypeAll_7, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x01586160, app::Rigidbody__Array*, FindObjectsOfType_7, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::ActionSequence__Array*, FindObjectsOfTypeAll_8, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x01586160, app::SceneRoot__Array*, FindObjectsOfType_8, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::Object_1__Array*, FindObjectsOfTypeAll_9, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::Texture__Array*, FindObjectsOfTypeAll_10, bool runtime_ok)
    IL2CPP_REGISTER_METHOD(0x015862B0, app::AudioClip__Array*, FindObjectsOfTypeAll_11, bool runtime_ok)
} // namespace app::classes::Moon::FindObjectsWrapper
