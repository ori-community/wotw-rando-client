#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerObjectInfoInit {
        inline app::SerObjectInfoInit__Class** type_info = (app::SerObjectInfoInit__Class**)(modloader::win::memory::resolve_rva(0x0472F288));
        inline app::SerObjectInfoInit__Class* get_class() {
            return il2cpp::get_class<app::SerObjectInfoInit__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
        }
        inline app::SerObjectInfoInit* create() {
            return il2cpp::create_object<app::SerObjectInfoInit>(get_class());
        }
    } // namespace SerObjectInfoInit
} // namespace app::classes::types
