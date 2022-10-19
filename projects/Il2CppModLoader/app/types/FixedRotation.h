#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedRotation {
        namespace {
            inline app::FixedRotation__Class* type_info_ref = nullptr;
        }
        inline app::FixedRotation__Class** type_info = &type_info_ref;
        inline app::FixedRotation__Class* get_class() {
            return il2cpp::get_class<app::FixedRotation__Class>(type_info, "", "FixedRotation");
        }
        inline app::FixedRotation* create() {
            return il2cpp::create_object<app::FixedRotation>(get_class());
        }
    } // namespace FixedRotation
} // namespace app::classes::types
