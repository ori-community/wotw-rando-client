#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::Component {
    IL2CPP_REGISTER_METHOD(0x024A8C90, void, Finalize, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRaiseEvents, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008009A0, bool, get_CanRaiseEventsInternal, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A8D10, void, add_Disposed, (app::Component * this_ptr, app::EventHandler * value))
    IL2CPP_REGISTER_METHOD(0x024A8DF0, void, remove_Disposed, (app::Component * this_ptr, app::EventHandler * value))
    IL2CPP_REGISTER_METHOD(0x024A8F00, app::EventHandlerList *, get_Events, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ISite *, get_Site, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Site, (app::Component * this_ptr, app::ISite * value))
    IL2CPP_REGISTER_METHOD(0x024A9050, void, Dispose_1, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A9100, void, Dispose_2, (app::Component * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x024A9360, app::IContainer *, get_Container, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A9400, app::Object *, GetService, (app::Component * this_ptr, app::Type * service))
    IL2CPP_REGISTER_METHOD(0x024A94B0, bool, get_DesignMode, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A9550, app::String *, ToString, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Component * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A9680, void, cctor, ())
}
