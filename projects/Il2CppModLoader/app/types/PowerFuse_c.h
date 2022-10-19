#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PowerFuse_c {
        inline app::PowerFuse_c__Class** type_info = (app::PowerFuse_c__Class**)(modloader::win::memory::resolve_rva(0x0471F6D0));
        inline app::PowerFuse_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PowerFuse_c__Class>(type_info, "", "PowerFuse", "<>c");
        }
        inline app::PowerFuse_c* create() {
            return il2cpp::create_object<app::PowerFuse_c>(get_class());
        }
    } // namespace PowerFuse_c
} // namespace app::classes::types
