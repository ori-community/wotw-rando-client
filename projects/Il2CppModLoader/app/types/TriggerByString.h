#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerByString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriggerByString__Class** type_info;
        inline app::TriggerByString__Class* get_class() {
            return il2cpp::get_class<app::TriggerByString__Class>(type_info, "", "TriggerByString");
        }
        inline app::TriggerByString* create() {
            return il2cpp::create_object<app::TriggerByString>(get_class());
        }
    } // namespace TriggerByString
} // namespace app::classes::types
