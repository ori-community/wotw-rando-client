#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionHelper_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateConditionHelper_c__Class** type_info;
        inline app::UberStateConditionHelper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateConditionHelper_c__Class>(type_info, "", "UberStateConditionHelper", "<>c");
        }
        inline app::UberStateConditionHelper_c* create() {
            return il2cpp::create_object<app::UberStateConditionHelper_c>(get_class());
        }
    } // namespace UberStateConditionHelper_c
} // namespace app::classes::types
