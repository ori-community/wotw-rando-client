#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBow {
        namespace {
            inline app::SeinBow__Class* type_info_ref = nullptr;
        }
        inline app::SeinBow__Class** type_info = &type_info_ref;
        inline app::SeinBow__Class* get_class() {
            return il2cpp::get_class<app::SeinBow__Class>(type_info, "", "SeinBow");
        }
        inline app::SeinBow* create() {
            return il2cpp::create_object<app::SeinBow>(get_class());
        }
    } // namespace SeinBow
} // namespace app::classes::types
