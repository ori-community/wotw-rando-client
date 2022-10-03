#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::VersionNotFoundException {
    IL2CPP_REGISTER_METHOD(0x022C1950, void, ctor_1, (app::VersionNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0476E148, VersionNotFoundException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022C19A0, void, ctor_2, (app::VersionNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C1A30, void, ctor_3, (app::VersionNotFoundException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::VersionNotFoundException
