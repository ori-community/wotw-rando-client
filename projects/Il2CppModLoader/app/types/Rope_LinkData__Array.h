#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rope_LinkData__Array {
        inline app::Rope_LinkData__Array__Class** type_info = (app::Rope_LinkData__Array__Class**)(modloader::win::memory::resolve_rva(0x04776E48));
        inline app::Rope_LinkData__Array__Class* get_class() {
            return il2cpp::get_class<app::Rope_LinkData__Array__Class>(type_info, "", "Rope+LinkData[]");
        }
        inline app::Rope_LinkData__Array* create() {
            return il2cpp::create_object<app::Rope_LinkData__Array>(get_class());
        }
    } // namespace Rope_LinkData__Array
} // namespace app::classes::types
