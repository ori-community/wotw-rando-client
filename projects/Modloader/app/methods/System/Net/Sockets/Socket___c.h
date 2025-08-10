#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IOAsyncResult.h>
#include <Modloader/app/structs/Socket_c.h>

namespace app::classes::System::Net::Sockets::Socket___c {
    IL2CPP_REGISTER_METHOD(0x0209ED40, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Socket_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0209EE80, void, _BeginSend_b__241_0, app::Socket_c* this_ptr, app::IOAsyncResult* s)
    IL2CPP_REGISTER_METHOD(0x0209EF50, void, __cctor_b__309_0, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x0209F3C0, void, __cctor_b__309_1, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x0209F500, void, __cctor_b__309_2, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x0209F790, void, __cctor_b__309_3, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x0209F9F0, void, __cctor_b__309_4, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x0209FEB0, void, __cctor_b__309_5, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A01E0, void, __cctor_b__309_6, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A03F0, void, __cctor_b__309_7, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A0650, void, __cctor_b__309_8, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A0830, void, __cctor_b__309_9, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A09E0, void, __cctor_b__309_10, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A0D50, void, __cctor_b__309_11, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A0F80, void, __cctor_b__309_12, app::Socket_c* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A11E0, void, __cctor_b__309_13, app::Socket_c* this_ptr, app::IOAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x020A1300, void, __cctor_b__309_14, app::Socket_c* this_ptr, app::IAsyncResult* ares)
} // namespace app::classes::System::Net::Sockets::Socket___c
