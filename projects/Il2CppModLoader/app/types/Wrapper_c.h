#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wrapper_c {
        inline app::Wrapper_c__Class** type_info = (app::Wrapper_c__Class**)(modloader::win::memory::resolve_rva(0x04793B58));
        inline app::Wrapper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_c__Class>(type_info, "Grdk", "Wrapper", "<>c");
        }
        inline app::Wrapper_c* create() {
            return il2cpp::create_object<app::Wrapper_c>(get_class());
        }
    } // namespace Wrapper_c
} // namespace app::classes::types
