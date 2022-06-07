#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Channels::SinkProviderData {
    IL2CPP_REGISTER_METHOD(0x01A9FD40, void, ctor, (app::SinkProviderData * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IList *, get_Children, (app::SinkProviderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IDictionary *, get_Properties, (app::SinkProviderData * this_ptr))
}
