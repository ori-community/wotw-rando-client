#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache.h>
#include <Modloader/app/structs/MoonAnimator_CrossfadeAnimation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerConnection.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::UnityEngine::ScriptableObject {
    IL2CPP_REGISTER_METHOD(0x0297AF40, void, ctor, (app::ScriptableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297B010, app::ScriptableObject*, CreateInstance_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0297B060, void, CreateScriptableObject, (app::ScriptableObject * self))
    IL2CPP_REGISTER_METHOD(0x0297B010, app::ScriptableObject*, CreateScriptableObjectInstanceFromType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::Object*, CreateInstance_2, ())
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::PlayerConnection*, CreateInstance_3, ())
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::MoonAnimator_CrossfadeAnimation*, CreateInstance_4, ())
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::CameraSettingsAsset*, CreateInstance_5, ())
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::LightCanvasEditorTextureCache*, CreateInstance_6, ())
} // namespace app::classes::UnityEngine::ScriptableObject
