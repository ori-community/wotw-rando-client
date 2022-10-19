#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartDashValueProvider {
        namespace {
            inline app::CartDashValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::CartDashValueProvider__Class** type_info = &type_info_ref;
        inline app::CartDashValueProvider__Class* get_class() {
            return il2cpp::get_class<app::CartDashValueProvider__Class>(type_info, "", "CartDashValueProvider");
        }
        inline app::CartDashValueProvider* create() {
            return il2cpp::create_object<app::CartDashValueProvider>(get_class());
        }
    } // namespace CartDashValueProvider
} // namespace app::classes::types
