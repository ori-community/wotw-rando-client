#pragma once
#include <Modloader/app/structs/UpgradableProjectProperties__Array.h>
#include <Modloader/app/structs/UpgradableProjectProperties__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableProjectProperties__Array {
        inline app::UpgradableProjectProperties__Array__Class** type_info() {
            static app::UpgradableProjectProperties__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableProjectProperties__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableProjectProperties__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProjectProperties__Array__Class>(type_info(), "", "UpgradableProjectProperties[]");
        }
        inline app::UpgradableProjectProperties__Array* create() {
            return il2cpp::create_object<app::UpgradableProjectProperties__Array>(get_class());
        }
    } // namespace UpgradableProjectProperties__Array
} // namespace app::classes::types
