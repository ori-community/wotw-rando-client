#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundCondition {
        namespace {
            inline app::CompoundCondition__Class* type_info_ref = nullptr;
        }
        inline app::CompoundCondition__Class** type_info = &type_info_ref;
        inline app::CompoundCondition__Class* get_class() {
            return il2cpp::get_class<app::CompoundCondition__Class>(type_info, "", "CompoundCondition");
        }
        inline app::CompoundCondition* create() {
            return il2cpp::create_object<app::CompoundCondition>(get_class());
        }
    } // namespace CompoundCondition
} // namespace app::classes::types
