#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkTaskContext.h>

namespace app::classes::AkTaskContext {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkTaskContext* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026FCB40, void*, getCPtr, app::AkTaskContext* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkTaskContext* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026FCBD0, void, Finalize, app::AkTaskContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FCC50, void, Dispose, app::AkTaskContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FCE60, void, set_uIdxThread, app::AkTaskContext* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026FCF90, uint32_t, get_uIdxThread, app::AkTaskContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FD0B0, void, ctor_2, app::AkTaskContext* this_ptr)
} // namespace app::classes::AkTaskContext
