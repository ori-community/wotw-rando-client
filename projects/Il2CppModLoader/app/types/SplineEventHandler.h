#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplineEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SplineEventHandler__Class** type_info;
        inline app::SplineEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SplineEventHandler__Class>(type_info, "", "SplineEventHandler");
        }
        inline app::SplineEventHandler* create() {
            return il2cpp::create_object<app::SplineEventHandler>(get_class());
        }
    } // namespace SplineEventHandler
} // namespace app::classes::types
