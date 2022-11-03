#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Net::CFRunLoop {
    IL2CPP_REGISTER_METHOD(0x021799A0, void, CFRunLoopAddSource, (void* rl, void* source, void* mode))
    IL2CPP_REGISTER_METHOD(0x02179A50, void, CFRunLoopRemoveSource, (void* rl, void* source, void* mode))
    IL2CPP_REGISTER_METHOD(0x02179B00, int32_t, CFRunLoopRunInMode, (void* mode, double seconds, bool return_after_source_handled))
    IL2CPP_REGISTER_METHOD(0x02179BC0, void*, CFRunLoopGetCurrent, ())
    IL2CPP_REGISTER_METHOD(0x02179C50, void, CFRunLoopStop, (void* rl))
    IL2CPP_REGISTER_METHOD(0x02173690, void, ctor, (app::CFRunLoop * this_ptr, void* handle, bool own))
    IL2CPP_REGISTER_METHOD(0x02179CF0, app::CFRunLoop*, get_CurrentRunLoop, ())
    IL2CPP_REGISTER_METHOD(0x02179EC0, void, AddSource, (app::CFRunLoop * this_ptr, void* source, app::CFString* mode))
    IL2CPP_REGISTER_METHOD(0x02179F90, void, RemoveSource, (app::CFRunLoop * this_ptr, void* source, app::CFString* mode))
    IL2CPP_REGISTER_METHOD(0x0217A060, int32_t, RunInMode, (app::CFRunLoop * this_ptr, app::CFString* mode, double seconds, bool return_after_source_handled))
    IL2CPP_REGISTER_METHOD(0x0217A130, void, Stop, (app::CFRunLoop * this_ptr))
} // namespace app::classes::Mono::Net::CFRunLoop
