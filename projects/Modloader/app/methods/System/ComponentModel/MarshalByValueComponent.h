#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::MarshalByValueComponent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5B10, void, Finalize, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5B90, void, add_Disposed, (app::MarshalByValueComponent * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01FF5C70, void, remove_Disposed, (app::MarshalByValueComponent * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01FF5D80, app::EventHandlerList*, get_Events, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ISite*, get_Site, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Site, (app::MarshalByValueComponent * this_ptr, app::ISite* value))
    IL2CPP_REGISTER_METHOD(0x01FF5ED0, void, Dispose_1, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5F80, void, Dispose_2, (app::MarshalByValueComponent * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01FF61E0, app::IContainer*, get_Container, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF6280, app::Object*, GetService, (app::MarshalByValueComponent * this_ptr, app::Type* service))
    IL2CPP_REGISTER_METHOD(0x01FF6330, bool, get_DesignMode, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF63D0, app::String*, ToString, (app::MarshalByValueComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF6500, void, cctor, ())
} // namespace app::classes::System::ComponentModel::MarshalByValueComponent
