#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utils_5 {
        namespace {
            app::Utils_5__Class* type_info_ref = nullptr;
        }
        app::Utils_5__Class** type_info = &type_info_ref;
        inline app::Utils_5__Class* get_class() {
            return il2cpp::get_class<app::Utils_5__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "Utils");
        }
        inline app::Utils_5* create() {
            return il2cpp::create_object<app::Utils_5>(get_class());
        }
    } // namespace Utils_5
} // namespace app::classes::types
