#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Services::TrackingServices {
    IL2CPP_REGISTER_METHOD(0x01D83F10, void, NotifyMarshaledObject, (app::Object * obj, app::ObjRef* or_1))
    IL2CPP_REGISTER_METHOD(0x01D842E0, void, NotifyUnmarshaledObject, (app::Object * obj, app::ObjRef* or_1))
    IL2CPP_REGISTER_METHOD(0x01D846B0, void, NotifyDisconnectedObject, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01D84A70, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Services::TrackingServices
