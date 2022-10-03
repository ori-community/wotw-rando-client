#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTypeTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberTypeTracker__Class** type_info;
        inline app::UberTypeTracker__Class* get_class() {
            return il2cpp::get_class<app::UberTypeTracker__Class>(type_info, "", "UberTypeTracker");
        }
        inline app::UberTypeTracker* create() {
            return il2cpp::create_object<app::UberTypeTracker>(get_class());
        }
    } // namespace UberTypeTracker
} // namespace app::classes::types
