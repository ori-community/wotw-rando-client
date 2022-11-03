#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache {
    IL2CPP_REGISTER_METHOD(0x010415E0, void, ctor_1, (app::SerObjectInfoCache * this_ptr, app::String* type_name, app::String* assembly_name, bool has_type_forwarded_from))
    IL2CPP_REGISTER_METHOD(0x01DA0E40, void, ctor_2, (app::SerObjectInfoCache * this_ptr, app::Type* type))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache
