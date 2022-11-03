#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::ChameleonKey {
    IL2CPP_REGISTER_METHOD(0x019A9360, void, ctor, (app::ChameleonKey * this_ptr, app::String* ns, app::XmlSchema* original_schema))
    IL2CPP_REGISTER_METHOD(0x019A9420, int32_t, GetHashCode, (app::ChameleonKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A94B0, bool, Equals, (app::ChameleonKey * this_ptr, app::Object* obj))
} // namespace app::classes::System::Xml::Schema::ChameleonKey
