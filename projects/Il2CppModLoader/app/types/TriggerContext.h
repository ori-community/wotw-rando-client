#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriggerContext__Class** type_info;
        inline app::TriggerContext__Class* get_class() {
            return il2cpp::get_class<app::TriggerContext__Class>(type_info, "", "TriggerContext");
        }
        inline app::TriggerContext* create() {
            return il2cpp::create_object<app::TriggerContext>(get_class());
        }
    } // namespace TriggerContext
} // namespace app::classes::types
