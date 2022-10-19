#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VitalsHealthProvider {
        namespace {
            inline app::VitalsHealthProvider__Class* type_info_ref = nullptr;
        }
        inline app::VitalsHealthProvider__Class** type_info = &type_info_ref;
        inline app::VitalsHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::VitalsHealthProvider__Class>(type_info, "", "VitalsHealthProvider");
        }
        inline app::VitalsHealthProvider* create() {
            return il2cpp::create_object<app::VitalsHealthProvider>(get_class());
        }
    } // namespace VitalsHealthProvider
} // namespace app::classes::types
