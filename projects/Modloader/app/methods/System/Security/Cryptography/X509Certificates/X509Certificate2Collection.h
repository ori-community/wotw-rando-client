#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509Certificate2Enumerator.h>
#include <Modloader/app/structs/X509FindType__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Collection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor_1, (app::X509Certificate2Collection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C5C40, void, ctor_2, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2Collection* certificates))
    IL2CPP_REGISTER_METHOD(0x021C5C70, app::X509Certificate2*, get_Item, (app::X509Certificate2Collection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x021C5DC0, int32_t, Add, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2* certificate))
    IL2CPP_REGISTER_METHOD(0x021C5EA0, void, AddRange, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2Collection* certificates))
    IL2CPP_REGISTER_METHOD(0x021C5F80, bool, Contains, (app::X509Certificate2Collection * this_ptr, app::X509Certificate2* certificate))
    IL2CPP_REGISTER_METHOD(0x021C61D0, app::X509Certificate2Collection*, Find, (app::X509Certificate2Collection * this_ptr, app::X509FindType__Enum find_type, app::Object* find_value, bool valid_only))
    IL2CPP_REGISTER_METHOD(0x021C7150, app::X509Certificate2Enumerator*, GetEnumerator, (app::X509Certificate2Collection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C7310, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Collection
