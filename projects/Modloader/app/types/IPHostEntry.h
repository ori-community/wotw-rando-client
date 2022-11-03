#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPHostEntry {
        inline app::IPHostEntry__Class** type_info = (app::IPHostEntry__Class**)(modloader::win::memory::resolve_rva(0x0474F468));
        inline app::IPHostEntry__Class* get_class() {
            return il2cpp::get_class<app::IPHostEntry__Class>(type_info, "System.Net", "IPHostEntry");
        }
        inline app::IPHostEntry* create() {
            return il2cpp::create_object<app::IPHostEntry>(get_class());
        }
    } // namespace IPHostEntry
} // namespace app::classes::types
