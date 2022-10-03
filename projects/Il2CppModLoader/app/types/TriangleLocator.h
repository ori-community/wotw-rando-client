#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriangleLocator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriangleLocator__Class** type_info;
        inline app::TriangleLocator__Class* get_class() {
            return il2cpp::get_class<app::TriangleLocator__Class>(type_info, "TriangleNet", "TriangleLocator");
        }
        inline app::TriangleLocator* create() {
            return il2cpp::create_object<app::TriangleLocator>(get_class());
        }
    } // namespace TriangleLocator
} // namespace app::classes::types
