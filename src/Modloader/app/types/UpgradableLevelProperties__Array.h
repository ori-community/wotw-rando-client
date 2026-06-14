#pragma once
#include <Modloader/app/structs/UpgradableLevelProperties__Array.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableLevelProperties__Array {
        inline app::UpgradableLevelProperties__Array__Class** type_info() {
            static app::UpgradableLevelProperties__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableLevelProperties__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableLevelProperties__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableLevelProperties__Array__Class>(type_info(), "", "UpgradableLevelProperties[]");
        }
        inline app::UpgradableLevelProperties__Array* create() {
            return il2cpp::create_object<app::UpgradableLevelProperties__Array>(get_class());
        }
    } // namespace UpgradableLevelProperties__Array
} // namespace app::classes::types
