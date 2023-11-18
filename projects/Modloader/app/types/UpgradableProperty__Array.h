#pragma once
#include <Modloader/app/structs/UpgradableProperty__Array.h>
#include <Modloader/app/structs/UpgradableProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableProperty__Array {
        inline app::UpgradableProperty__Array__Class** type_info() {
            static app::UpgradableProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProperty__Array__Class>(type_info(), "", "UpgradableProperty[]");
        }
        inline app::UpgradableProperty__Array* create() {
            return il2cpp::create_object<app::UpgradableProperty__Array>(get_class());
        }
    } // namespace UpgradableProperty__Array
} // namespace app::classes::types
