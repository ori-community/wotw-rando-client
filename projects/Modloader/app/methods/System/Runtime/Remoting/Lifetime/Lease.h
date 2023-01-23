#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Lease.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/LeaseState__Enum.h>
#include <Modloader/app/structs/ISponsor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Remoting::Lifetime::Lease {
    IL2CPP_REGISTER_METHOD(0x02306F60, void, ctor, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023071F0, app::TimeSpan, get_CurrentLeaseTime, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::LeaseState__Enum, get_CurrentState, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015145C0, void, Activate, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023072A0, void, set_InitialLeaseTime, (app::Lease * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHODINFO(0x0477BB38, Lease_set_InitialLeaseTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::TimeSpan, get_RenewOnCallTime, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02307410, void, set_RenewOnCallTime, (app::Lease * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHODINFO(0x047171A0, Lease_set_RenewOnCallTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02307500, void, set_SponsorshipTimeout, (app::Lease * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHODINFO(0x0475DEC0, Lease_set_SponsorshipTimeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023075F0, app::TimeSpan, Renew, (app::Lease * this_ptr, app::TimeSpan renewal_time))
    IL2CPP_REGISTER_METHOD(0x023076D0, void, Unregister, (app::Lease * this_ptr, app::ISponsor* obj))
    IL2CPP_REGISTER_METHOD(0x02307840, void, UpdateState, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02307AB0, void, CheckNextSponsor, (app::Lease * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02307DE0, void, ProcessSponsorResponse, (app::Lease * this_ptr, app::Object* state, bool timed_out))
    IL2CPP_REGISTER_METHODINFO(0x0478A8F8, Lease_ProcessSponsorResponse__MethodInfo)
} // namespace app::classes::System::Runtime::Remoting::Lifetime::Lease
