#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPAddress__Array {
        inline app::IPAddress__Array__Class** type_info = (app::IPAddress__Array__Class**)(modloader::win::memory::resolve_rva(0x047415C0));
        inline app::IPAddress__Array__Class* get_class() {
            return il2cpp::get_class<app::IPAddress__Array__Class>(type_info, "System.Net", "IPAddress[]");
        }
        inline app::IPAddress__Array* create() {
            return il2cpp::create_object<app::IPAddress__Array>(get_class());
        }
    } // namespace IPAddress__Array
} // namespace app::classes::types
