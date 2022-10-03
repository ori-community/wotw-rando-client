#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDamageOwner {
        namespace {
            app::SeinDamageOwner__Class* type_info_ref = nullptr;
        }
        app::SeinDamageOwner__Class** type_info = &type_info_ref;
        inline app::SeinDamageOwner__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageOwner__Class>(type_info, "Moon", "SeinDamageOwner");
        }
        inline app::SeinDamageOwner* create() {
            return il2cpp::create_object<app::SeinDamageOwner>(get_class());
        }
    } // namespace SeinDamageOwner
} // namespace app::classes::types
