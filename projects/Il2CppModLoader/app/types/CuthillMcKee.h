#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CuthillMcKee {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CuthillMcKee__Class** type_info;
        inline app::CuthillMcKee__Class* get_class() {
            return il2cpp::get_class<app::CuthillMcKee__Class>(type_info, "TriangleNet.Tools", "CuthillMcKee");
        }
        inline app::CuthillMcKee* create() {
            return il2cpp::create_object<app::CuthillMcKee>(get_class());
        }
    } // namespace CuthillMcKee
} // namespace app::classes::types
