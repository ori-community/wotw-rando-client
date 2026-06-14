#pragma once
#include <Modloader/app/structs/CartDashValueProvider.h>
#include <Modloader/app/structs/CartDashValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartDashValueProvider {
        inline app::CartDashValueProvider__Class** type_info() {
            static app::CartDashValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartDashValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartDashValueProvider__Class* get_class() {
            return il2cpp::get_class<app::CartDashValueProvider__Class>(type_info(), "", "CartDashValueProvider");
        }
        inline app::CartDashValueProvider* create() {
            return il2cpp::create_object<app::CartDashValueProvider>(get_class());
        }
    } // namespace CartDashValueProvider
} // namespace app::classes::types
