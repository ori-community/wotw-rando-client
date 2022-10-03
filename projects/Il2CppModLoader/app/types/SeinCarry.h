#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCarry {
        namespace {
            app::SeinCarry__Class* type_info_ref = nullptr;
        }
        app::SeinCarry__Class** type_info = &type_info_ref;
        inline app::SeinCarry__Class* get_class() {
            return il2cpp::get_class<app::SeinCarry__Class>(type_info, "", "SeinCarry");
        }
        inline app::SeinCarry* create() {
            return il2cpp::create_object<app::SeinCarry>(get_class());
        }
    } // namespace SeinCarry
} // namespace app::classes::types
