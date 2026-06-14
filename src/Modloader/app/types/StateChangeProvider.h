#pragma once
#include <Modloader/app/structs/StateChangeProvider.h>
#include <Modloader/app/structs/StateChangeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateChangeProvider {
        inline app::StateChangeProvider__Class** type_info() {
            static app::StateChangeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateChangeProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateChangeProvider__Class* get_class() {
            return il2cpp::get_class<app::StateChangeProvider__Class>(type_info(), "Moon", "StateChangeProvider");
        }
        inline app::StateChangeProvider* create() {
            return il2cpp::create_object<app::StateChangeProvider>(get_class());
        }
    } // namespace StateChangeProvider
} // namespace app::classes::types
