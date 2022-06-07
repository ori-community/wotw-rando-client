#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Constraints {
    IL2CPP_REGISTER_METHOD(0x02052E00, bool, IsValid, (app::Constraints * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02052EA0, void, Initiate, (app::Constraints * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02052FB0, void, Update, (app::Constraints * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Constraints * this_ptr))
}
