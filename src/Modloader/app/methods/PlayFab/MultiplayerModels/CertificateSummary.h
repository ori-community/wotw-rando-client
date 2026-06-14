#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CertificateSummary.h>

namespace app::classes::PlayFab::MultiplayerModels::CertificateSummary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CertificateSummary* this_ptr)
}
