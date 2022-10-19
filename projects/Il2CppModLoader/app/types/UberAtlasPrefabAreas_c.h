#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreas_c {
        inline app::UberAtlasPrefabAreas_c__Class** type_info = (app::UberAtlasPrefabAreas_c__Class**)(modloader::win::memory::resolve_rva(0x047569A8));
        inline app::UberAtlasPrefabAreas_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberAtlasPrefabAreas_c__Class>(type_info, "", "UberAtlasPrefabAreas", "<>c");
        }
        inline app::UberAtlasPrefabAreas_c* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreas_c>(get_class());
        }
    } // namespace UberAtlasPrefabAreas_c
} // namespace app::classes::types
