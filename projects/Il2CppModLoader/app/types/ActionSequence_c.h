#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionSequence_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionSequence_c__Class** type_info;
        inline app::ActionSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionSequence_c__Class>(type_info, "", "ActionSequence", "<>c");
        }
        inline app::ActionSequence_c* create() {
            return il2cpp::create_object<app::ActionSequence_c>(get_class());
        }
    } // namespace ActionSequence_c
} // namespace app::classes::types
