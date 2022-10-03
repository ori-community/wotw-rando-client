#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trigger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Trigger_c__Class** type_info;
        inline app::Trigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Trigger_c__Class>(type_info, "", "Trigger", "<>c");
        }
        inline app::Trigger_c* create() {
            return il2cpp::create_object<app::Trigger_c>(get_class());
        }
    } // namespace Trigger_c
} // namespace app::classes::types
