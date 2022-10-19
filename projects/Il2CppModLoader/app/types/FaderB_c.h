#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderB_c {
        inline app::FaderB_c__Class** type_info = (app::FaderB_c__Class**)(modloader::win::memory::resolve_rva(0x0473CA00));
        inline app::FaderB_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FaderB_c__Class>(type_info, "", "FaderB", "<>c");
        }
        inline app::FaderB_c* create() {
            return il2cpp::create_object<app::FaderB_c>(get_class());
        }
    } // namespace FaderB_c
} // namespace app::classes::types
