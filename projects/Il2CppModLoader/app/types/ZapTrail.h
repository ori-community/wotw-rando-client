#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZapTrail {
        namespace {
            app::ZapTrail__Class* type_info_ref = nullptr;
        }
        app::ZapTrail__Class** type_info = &type_info_ref;
        inline app::ZapTrail__Class* get_class() {
            return il2cpp::get_class<app::ZapTrail__Class>(type_info, "", "ZapTrail");
        }
        inline app::ZapTrail* create() {
            return il2cpp::create_object<app::ZapTrail>(get_class());
        }
    } // namespace ZapTrail
} // namespace app::classes::types
