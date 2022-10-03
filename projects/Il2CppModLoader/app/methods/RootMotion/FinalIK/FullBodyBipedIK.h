#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::FullBodyBipedIK {
    IL2CPP_REGISTER_METHOD(0x02063330, void, OpenUserManual, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020633F0, void, OpenScriptReference, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020634B0, void, OpenSetupTutorial, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02063570, void, OpenInspectorTutorial, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02063630, void, SupportGroup, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020636F0, void, ASThread, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020637B0, void, SetReferences, (app::FullBodyBipedIK * this_ptr, app::BipedReferences* references, app::Transform* root_node))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IKSolver*, GetIKSolver, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020637E0, bool, ReferencesError, (app::FullBodyBipedIK * this_ptr, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x02063A80, bool, ReferencesWarning, (app::FullBodyBipedIK * this_ptr, app::String** warning_message))
    IL2CPP_REGISTER_METHOD(0x020640E0, void, Reinitiate, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064110, void, AutoDetectReferences, (app::FullBodyBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064310, void, ctor, (app::FullBodyBipedIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::FullBodyBipedIK
