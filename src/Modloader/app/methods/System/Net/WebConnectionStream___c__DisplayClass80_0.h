#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/SimpleAsyncResult.h>
#include <Modloader/app/structs/WebConnectionStream_c_DisplayClass80_0.h>

namespace app::classes::System::Net::WebConnectionStream___c__DisplayClass80_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebConnectionStream_c_DisplayClass80_0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D6F600, void, _WriteRequestAsync_b__0, app::WebConnectionStream_c_DisplayClass80_0* this_ptr, app::SimpleAsyncResult* inner)
    IL2CPP_REGISTER_METHOD(0x01D6F950, void, _WriteRequestAsync_b__1, app::WebConnectionStream_c_DisplayClass80_0* this_ptr, app::IAsyncResult* r)
} // namespace app::classes::System::Net::WebConnectionStream___c__DisplayClass80_0
