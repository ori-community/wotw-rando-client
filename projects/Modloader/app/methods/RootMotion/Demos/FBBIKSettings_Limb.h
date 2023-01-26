#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FBBIKSettings_Limb.h>
#include <Modloader/app/structs/FullBodyBipedChain__Enum.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>

namespace app::classes::RootMotion::Demos::FBBIKSettings_Limb {
    IL2CPP_REGISTER_METHOD(0x02219AB0, void, Apply, (app::FBBIKSettings_Limb * this_ptr, app::FullBodyBipedChain__Enum chain, app::IKSolverFullBodyBiped* solver))
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, (app::FBBIKSettings_Limb * this_ptr))
} // namespace app::classes::RootMotion::Demos::FBBIKSettings_Limb
