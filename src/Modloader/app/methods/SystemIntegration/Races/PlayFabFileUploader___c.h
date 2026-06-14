#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbortFileUploadsResponse.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabFileUploader_c.h>

namespace app::classes::SystemIntegration::Races::PlayFabFileUploader___c {
    IL2CPP_REGISTER_METHOD(0x00524490, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabFileUploader_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnInitFailed_b__7_0, app::PlayFabFileUploader_c* this_ptr, app::AbortFileUploadsResponse* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnInitFailed_b__7_1, app::PlayFabFileUploader_c* this_ptr, app::PlayFabError* _p0_)
} // namespace app::classes::SystemIntegration::Races::PlayFabFileUploader___c
