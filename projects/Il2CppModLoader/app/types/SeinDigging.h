#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDigging {
        namespace {
            app::SeinDigging__Class* type_info_ref = nullptr;
        }
        app::SeinDigging__Class** type_info = &type_info_ref;
        inline app::SeinDigging__Class* get_class() {
            return il2cpp::get_class<app::SeinDigging__Class>(type_info, "", "SeinDigging");
        }
        inline app::SeinDigging* create() {
            return il2cpp::create_object<app::SeinDigging>(get_class());
        }
    } // namespace SeinDigging
} // namespace app::classes::types
