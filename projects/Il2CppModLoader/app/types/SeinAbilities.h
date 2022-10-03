#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilities {
        namespace {
            app::SeinAbilities__Class* type_info_ref = nullptr;
        }
        app::SeinAbilities__Class** type_info = &type_info_ref;
        inline app::SeinAbilities__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilities__Class>(type_info, "", "SeinAbilities");
        }
        inline app::SeinAbilities* create() {
            return il2cpp::create_object<app::SeinAbilities>(get_class());
        }
    } // namespace SeinAbilities
} // namespace app::classes::types
