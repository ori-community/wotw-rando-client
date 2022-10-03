#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLever {
        namespace {
            app::SeinLever__Class* type_info_ref = nullptr;
        }
        app::SeinLever__Class** type_info = &type_info_ref;
        inline app::SeinLever__Class* get_class() {
            return il2cpp::get_class<app::SeinLever__Class>(type_info, "", "SeinLever");
        }
        inline app::SeinLever* create() {
            return il2cpp::create_object<app::SeinLever>(get_class());
        }
    } // namespace SeinLever
} // namespace app::classes::types
