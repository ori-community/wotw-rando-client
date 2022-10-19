#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AtomicBoolean {
        inline app::AtomicBoolean__Class** type_info = (app::AtomicBoolean__Class**)(modloader::win::memory::resolve_rva(0x0471CF68));
        inline app::AtomicBoolean__Class* get_class() {
            return il2cpp::get_class<app::AtomicBoolean__Class>(type_info, "System.Threading", "AtomicBoolean");
        }
        inline app::AtomicBoolean* create() {
            return il2cpp::create_object<app::AtomicBoolean>(get_class());
        }
    } // namespace AtomicBoolean
} // namespace app::classes::types
