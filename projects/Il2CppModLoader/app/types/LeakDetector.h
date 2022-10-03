#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeakDetector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeakDetector__Class** type_info;
        inline app::LeakDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakDetector__Class>(type_info, "", "LeakDetector");
        }
        inline app::LeakDetector* create() {
            return il2cpp::create_object<app::LeakDetector>(get_class());
        }
    } // namespace LeakDetector
} // namespace app::classes::types
