#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly_UnmanagedMemoryStreamForModule.h>
#include <Modloader/app/structs/Module.h>

namespace app::classes::System::Reflection::Assembly_UnmanagedMemoryStreamForModule {
    IL2CPP_REGISTER_METHOD(
        0x022838D0,
        void,
        ctor,
        app::Assembly_UnmanagedMemoryStreamForModule* this_ptr,
        uint8_t* pointer,
        int64_t length,
        app::Module* module
    )
    IL2CPP_REGISTER_METHOD(0x022839C0, void, Dispose, app::Assembly_UnmanagedMemoryStreamForModule* this_ptr, bool disposing)
} // namespace app::classes::System::Reflection::Assembly_UnmanagedMemoryStreamForModule
