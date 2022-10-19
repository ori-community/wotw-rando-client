#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuDash_c {
        inline app::KuDash_c__Class** type_info = (app::KuDash_c__Class**)(modloader::win::memory::resolve_rva(0x04793118));
        inline app::KuDash_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_c__Class>(type_info, "", "KuDash", "<>c");
        }
        inline app::KuDash_c* create() {
            return il2cpp::create_object<app::KuDash_c>(get_class());
        }
    } // namespace KuDash_c
} // namespace app::classes::types
