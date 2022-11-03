#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShaderDetector {
    IL2CPP_REGISTER_METHOD(0x01910A70, app::GUIStyle*, get_LabelStyle, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01910E60, app::UberShaderDetector*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01910EE0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x01910F90, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x019110C0, void, EnsureImgui, (app::UberShaderDetector * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x019111B0, void, Awake, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01911210, void, Destroy, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01911220, app::String*, FullPath, (app::UberShaderDetector * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckInstantiationAgainstStripList, (app::GameObject * original))
    IL2CPP_REGISTER_METHOD(0x01911360, void, CheckInstantiation, (app::UberShaderDetector * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x019115A0, void, OnDisable, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019119D0, void, Update, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01911ED0, void, OnGUI, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019121B0, void, ctor, (app::UberShaderDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01912430, float, _Update_b__22_0, (app::UberShaderDetector * this_ptr, app::KeyValuePair_2_System_String_System_Single_ x))
    IL2CPP_REGISTER_METHODINFO(0x04736910, UberShaderDetector__Update_b__22_0__MethodInfo)
} // namespace app::classes::UberShaderDetector
