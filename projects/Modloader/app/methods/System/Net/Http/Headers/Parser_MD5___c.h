#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Parser_MD5_c.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_MD5___c {
    IL2CPP_REGISTER_METHOD(0x02D12C10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Parser_MD5_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D12D50, app::String*, __cctor_b__2_0, (app::Parser_MD5_c * this_ptr, app::Object* l))
} // namespace app::classes::System::Net::Http::Headers::Parser_MD5___c
