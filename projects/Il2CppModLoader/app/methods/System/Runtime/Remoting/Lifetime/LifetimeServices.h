#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Lifetime::LifetimeServices {
    IL2CPP_REGISTER_METHOD(0x02308E00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02309110, app::TimeSpan, get_LeaseManagerPollTime, ())
    IL2CPP_REGISTER_METHOD(0x023091B0, void, set_LeaseManagerPollTime, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02309280, app::TimeSpan, get_LeaseTime, ())
    IL2CPP_REGISTER_METHOD(0x02309320, void, set_LeaseTime, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x023093D0, app::TimeSpan, get_RenewOnCallTime, ())
    IL2CPP_REGISTER_METHOD(0x02309470, void, set_RenewOnCallTime, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02309520, app::TimeSpan, get_SponsorshipTimeout, ())
    IL2CPP_REGISTER_METHOD(0x023095C0, void, set_SponsorshipTimeout, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02309670, void, TrackLifetime, (app::ServerIdentity * identity))
}
