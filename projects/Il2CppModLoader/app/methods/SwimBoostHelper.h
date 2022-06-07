#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwimBoostHelper {
    IL2CPP_REGISTER_METHOD(0x01826BD0, void, Update, (app::SwimBoostHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01827110, void, InitializeAnalysis, (app::SwimBoostHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018271E0, void, UpdateAnalysis, (app::SwimBoostHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01827300, void, CompleteAnalysis, (app::SwimBoostHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01827400, void, CompleteSpamAnalysis, (app::SwimBoostHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01827500, void, ctor, (app::SwimBoostHelper * this_ptr))
}
