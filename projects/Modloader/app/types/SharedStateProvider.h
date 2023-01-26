#pragma once
#include <Modloader/app/structs/SharedStateProvider.h>
#include <Modloader/app/structs/SharedStateProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedStateProvider {
        inline app::SharedStateProvider__Class** type_info() {
            static app::SharedStateProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SharedStateProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SharedStateProvider__Class* get_class() {
            return il2cpp::get_class<app::SharedStateProvider__Class>(type_info(), "", "SharedStateProvider");
        }
        inline app::SharedStateProvider* create() {
            return il2cpp::create_object<app::SharedStateProvider>(get_class());
        }
    } // namespace SharedStateProvider
} // namespace app::classes::types
