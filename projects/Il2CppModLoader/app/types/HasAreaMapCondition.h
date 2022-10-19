#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasAreaMapCondition {
        namespace {
            inline app::HasAreaMapCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasAreaMapCondition__Class** type_info = &type_info_ref;
        inline app::HasAreaMapCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAreaMapCondition__Class>(type_info, "", "HasAreaMapCondition");
        }
        inline app::HasAreaMapCondition* create() {
            return il2cpp::create_object<app::HasAreaMapCondition>(get_class());
        }
    } // namespace HasAreaMapCondition
} // namespace app::classes::types
