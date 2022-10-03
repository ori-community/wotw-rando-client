#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::ScriptableObject {
    IL2CPP_REGISTER_METHOD(0x0297AF40, void, ctor, (app::ScriptableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297B010, app::ScriptableObject*, CreateInstance_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0297B060, void, CreateScriptableObject, (app::ScriptableObject * self))
    IL2CPP_REGISTER_METHOD(0x0297B010, app::ScriptableObject*, CreateScriptableObjectInstanceFromType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::Object*, CreateInstance_2, ())
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::PlayerConnection*, CreateInstance_3, ())
    IL2CPP_REGISTER_METHODINFO(0x0478B4C0, ScriptableObject_CreateInstance_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::MoonAnimator_CrossfadeAnimation*, CreateInstance_4, ())
    IL2CPP_REGISTER_METHODINFO(0x04786AE8, ScriptableObject_CreateInstance_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::CameraSettingsAsset*, CreateInstance_5, ())
    IL2CPP_REGISTER_METHODINFO(0x047461B8, ScriptableObject_CreateInstance_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D9A0, app::LightCanvasEditorTextureCache*, CreateInstance_6, ())
    IL2CPP_REGISTER_METHODINFO(0x04796FE0, ScriptableObject_CreateInstance_5__MethodInfo)
} // namespace app::classes::UnityEngine::ScriptableObject
