#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::CaseInsensitiveAscii {
    IL2CPP_REGISTER_METHOD(0x02016520, int32_t, GetHashCode, (app::CaseInsensitiveAscii * this_ptr, app::Object* my_object))
    IL2CPP_REGISTER_METHOD(0x020166A0, int32_t, Compare, (app::CaseInsensitiveAscii * this_ptr, app::Object* first_object, app::Object* second_object))
    IL2CPP_REGISTER_METHOD(0x02016890, int32_t, FastGetHashCode, (app::CaseInsensitiveAscii * this_ptr, app::String* my_string))
    IL2CPP_REGISTER_METHOD(0x02016A00, bool, Equals, (app::CaseInsensitiveAscii * this_ptr, app::Object* first_object, app::Object* second_object))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CaseInsensitiveAscii * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02016BE0, void, cctor, ())
} // namespace app::classes::System::Net::CaseInsensitiveAscii
