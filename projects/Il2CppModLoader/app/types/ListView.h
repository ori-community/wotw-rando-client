#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListView__Class** type_info;
        inline app::ListView__Class* get_class() {
            return il2cpp::get_class<app::ListView__Class>(type_info, "Moon.UberStateVisualization", "ListView");
        }
        inline app::ListView* create() {
            return il2cpp::create_object<app::ListView>(get_class());
        }
    } // namespace ListView
} // namespace app::classes::types
