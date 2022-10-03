#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShuoldShowHDROptionCondition {
        namespace {
            app::ShuoldShowHDROptionCondition__Class* type_info_ref = nullptr;
        }
        app::ShuoldShowHDROptionCondition__Class** type_info = &type_info_ref;
        inline app::ShuoldShowHDROptionCondition__Class* get_class() {
            return il2cpp::get_class<app::ShuoldShowHDROptionCondition__Class>(type_info, "", "ShuoldShowHDROptionCondition");
        }
        inline app::ShuoldShowHDROptionCondition* create() {
            return il2cpp::create_object<app::ShuoldShowHDROptionCondition>(get_class());
        }
    } // namespace ShuoldShowHDROptionCondition
} // namespace app::classes::types
