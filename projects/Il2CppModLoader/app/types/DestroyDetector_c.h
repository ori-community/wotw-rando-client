#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyDetector_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DestroyDetector_c__Class** type_info;
        inline app::DestroyDetector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DestroyDetector_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DestroyDetector", "<>c");
        }
        inline app::DestroyDetector_c* create() {
            return il2cpp::create_object<app::DestroyDetector_c>(get_class());
        }
    } // namespace DestroyDetector_c
} // namespace app::classes::types
