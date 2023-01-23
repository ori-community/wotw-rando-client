#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnmanagedMemoryStream__Class.h>
#include <Modloader/app/structs/UnmanagedMemoryStream.h>

namespace app::classes::types {
    namespace UnmanagedMemoryStream {
        inline app::UnmanagedMemoryStream__Class** type_info = (app::UnmanagedMemoryStream__Class**)(modloader::win::memory::resolve_rva(0x047502C0));
        inline app::UnmanagedMemoryStream__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedMemoryStream__Class>(type_info, "System.IO", "UnmanagedMemoryStream");
        }
        inline app::UnmanagedMemoryStream* create() {
            return il2cpp::create_object<app::UnmanagedMemoryStream>(get_class());
        }
    } // namespace UnmanagedMemoryStream
} // namespace app::classes::types
