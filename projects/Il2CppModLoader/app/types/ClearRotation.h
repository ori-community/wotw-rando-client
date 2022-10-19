#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClearRotation {
        namespace {
            inline app::ClearRotation__Class* type_info_ref = nullptr;
        }
        inline app::ClearRotation__Class** type_info = &type_info_ref;
        inline app::ClearRotation__Class* get_class() {
            return il2cpp::get_class<app::ClearRotation__Class>(type_info, "", "ClearRotation");
        }
        inline app::ClearRotation* create() {
            return il2cpp::create_object<app::ClearRotation>(get_class());
        }
    } // namespace ClearRotation
} // namespace app::classes::types
