#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSData {
        namespace {
            app::FPSData__Class* type_info_ref = nullptr;
        }
        app::FPSData__Class** type_info = &type_info_ref;
        inline app::FPSData__Class* get_class() {
            return il2cpp::get_class<app::FPSData__Class>(type_info, "", "FPSData");
        }
        inline app::FPSData* create() {
            return il2cpp::create_object<app::FPSData>(get_class());
        }
    } // namespace FPSData
} // namespace app::classes::types
