#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericUberStateCondition {
        namespace {
            inline app::GenericUberStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::GenericUberStateCondition__Class** type_info = &type_info_ref;
        inline app::GenericUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::GenericUberStateCondition__Class>(type_info, "", "GenericUberStateCondition");
        }
        inline app::GenericUberStateCondition* create() {
            return il2cpp::create_object<app::GenericUberStateCondition>(get_class());
        }
    } // namespace GenericUberStateCondition
} // namespace app::classes::types
