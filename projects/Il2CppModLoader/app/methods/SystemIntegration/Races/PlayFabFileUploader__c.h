#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SystemIntegration::Races::PlayFabFileUploader___c {
    IL2CPP_REGISTER_METHOD(0x00524490, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabFileUploader_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnInitFailed_b__7_0, (app::PlayFabFileUploader_c * this_ptr, app::AbortFileUploadsResponse * _p0_))
    IL2CPP_REGISTER_METHODINFO(0x0470C8B8, PlayFabFileUploader_c__OnInitFailed_b__7_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnInitFailed_b__7_1, (app::PlayFabFileUploader_c * this_ptr, app::PlayFabError * _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04701228, PlayFabFileUploader_c__OnInitFailed_b__7_1__MethodInfo)
}
