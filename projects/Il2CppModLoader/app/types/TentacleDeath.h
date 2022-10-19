#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleDeath {
        namespace {
            inline app::TentacleDeath__Class* type_info_ref = nullptr;
        }
        inline app::TentacleDeath__Class** type_info = &type_info_ref;
        inline app::TentacleDeath__Class* get_class() {
            return il2cpp::get_class<app::TentacleDeath__Class>(type_info, "", "TentacleDeath");
        }
        inline app::TentacleDeath* create() {
            return il2cpp::create_object<app::TentacleDeath>(get_class());
        }
    } // namespace TentacleDeath
} // namespace app::classes::types
