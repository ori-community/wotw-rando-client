#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionCallDictionary {
    IL2CPP_REGISTER_METHOD(0x0230F580, void, ctor, (app::ConstructionCallDictionary * this_ptr, app::IConstructionCallMessage* message))
    IL2CPP_REGISTER_METHOD(0x0230F640, app::Object*, GetMethodProperty, (app::ConstructionCallDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x0230F9D0, void, SetMethodProperty, (app::ConstructionCallDictionary * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0470A110, ConstructionCallDictionary_SetMethodProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0230FC50, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionCallDictionary
