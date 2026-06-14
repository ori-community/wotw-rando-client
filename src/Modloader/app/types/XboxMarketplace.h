#pragma once
#include <Modloader/app/structs/XboxMarketplace.h>
#include <Modloader/app/structs/XboxMarketplace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxMarketplace {
        inline app::XboxMarketplace__Class** type_info() {
            static app::XboxMarketplace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxMarketplace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxMarketplace__Class* get_class() {
            return il2cpp::get_class<app::XboxMarketplace__Class>(type_info(), "", "XboxMarketplace");
        }
        inline app::XboxMarketplace* create() {
            return il2cpp::create_object<app::XboxMarketplace>(get_class());
        }
    } // namespace XboxMarketplace
} // namespace app::classes::types
