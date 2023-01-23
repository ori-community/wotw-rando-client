#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509Store.h>
#include <Modloader/app/structs/StoreName__Enum.h>
#include <Modloader/app/structs/StoreLocation__Enum.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509Stores.h>
#include <Modloader/app/structs/X509Store_1.h>
#include <Modloader/app/structs/OpenFlags__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Store {
    IL2CPP_REGISTER_METHOD(0x0257DBC0, void, ctor, (app::X509Store * this_ptr, app::StoreName__Enum store_name, app::StoreLocation__Enum store_location))
    IL2CPP_REGISTER_METHODINFO(0x04759048, X509Store__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257DD10, app::X509Certificate2Collection*, get_Certificates, (app::X509Store * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257DE90, app::X509Stores*, get_Factory, (app::X509Store * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::X509Store_1*, get_Store, (app::X509Store * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257DEB0, void, Close, (app::X509Store * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257DF30, void, Dispose, (app::X509Store * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257DF40, void, Open, (app::X509Store * this_ptr, app::OpenFlags__Enum flags))
    IL2CPP_REGISTER_METHODINFO(0x04781748, X509Store_Open__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Store
