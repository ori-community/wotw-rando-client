#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AimBoxing {
        namespace {
            inline app::AimBoxing__Class* type_info_ref = nullptr;
        }
        inline app::AimBoxing__Class** type_info = &type_info_ref;
        inline app::AimBoxing__Class* get_class() {
            return il2cpp::get_class<app::AimBoxing__Class>(type_info, "RootMotion.Demos", "AimBoxing");
        }
        inline app::AimBoxing* create() {
            return il2cpp::create_object<app::AimBoxing>(get_class());
        }
    } // namespace AimBoxing
} // namespace app::classes::types
