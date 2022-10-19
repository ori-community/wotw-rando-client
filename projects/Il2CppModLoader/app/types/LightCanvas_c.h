#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvas_c {
        inline app::LightCanvas_c__Class** type_info = (app::LightCanvas_c__Class**)(modloader::win::memory::resolve_rva(0x047140A8));
        inline app::LightCanvas_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_c__Class>(type_info, "", "LightCanvas", "<>c");
        }
        inline app::LightCanvas_c* create() {
            return il2cpp::create_object<app::LightCanvas_c>(get_class());
        }
    } // namespace LightCanvas_c
} // namespace app::classes::types
