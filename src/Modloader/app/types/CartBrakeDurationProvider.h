#pragma once
#include <Modloader/app/structs/CartBrakeDurationProvider.h>
#include <Modloader/app/structs/CartBrakeDurationProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartBrakeDurationProvider {
        inline app::CartBrakeDurationProvider__Class** type_info() {
            static app::CartBrakeDurationProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartBrakeDurationProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartBrakeDurationProvider__Class* get_class() {
            return il2cpp::get_class<app::CartBrakeDurationProvider__Class>(type_info(), "", "CartBrakeDurationProvider");
        }
        inline app::CartBrakeDurationProvider* create() {
            return il2cpp::create_object<app::CartBrakeDurationProvider>(get_class());
        }
    } // namespace CartBrakeDurationProvider
} // namespace app::classes::types
