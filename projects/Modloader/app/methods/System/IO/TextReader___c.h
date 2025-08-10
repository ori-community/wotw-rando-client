#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader_c.h>

namespace app::classes::System::IO::TextReader___c {
    IL2CPP_REGISTER_METHOD(0x02385960, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TextReader_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02385AA0, app::String*, __cctor_b__22_0, app::TextReader_c* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x02385BC0, int32_t, __cctor_b__22_1, app::TextReader_c* this_ptr, app::Object* state)
} // namespace app::classes::System::IO::TextReader___c
