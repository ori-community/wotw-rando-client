#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryStream {
        inline app::MemoryStream__Class** type_info = (app::MemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0474A648));
        inline app::MemoryStream__Class* get_class() {
            return il2cpp::get_class<app::MemoryStream__Class>(type_info, "System.IO", "MemoryStream");
        }
        inline app::MemoryStream* create() {
            return il2cpp::create_object<app::MemoryStream>(get_class());
        }
    } // namespace MemoryStream
} // namespace app::classes::types
