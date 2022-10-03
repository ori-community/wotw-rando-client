#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMortality {
        namespace {
            app::SeinMortality__Class* type_info_ref = nullptr;
        }
        app::SeinMortality__Class** type_info = &type_info_ref;
        inline app::SeinMortality__Class* get_class() {
            return il2cpp::get_class<app::SeinMortality__Class>(type_info, "", "SeinMortality");
        }
        inline app::SeinMortality* create() {
            return il2cpp::create_object<app::SeinMortality>(get_class());
        }
    } // namespace SeinMortality
} // namespace app::classes::types
