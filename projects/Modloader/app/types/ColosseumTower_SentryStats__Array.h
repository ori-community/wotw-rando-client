#pragma once
#include <Modloader/app/structs/ColosseumTower_SentryStats__Array.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumTower_SentryStats__Array {
        inline app::ColosseumTower_SentryStats__Array__Class** type_info() {
            static app::ColosseumTower_SentryStats__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumTower_SentryStats__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumTower_SentryStats__Array__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTower_SentryStats__Array__Class>(type_info(), "", "ColosseumTower+SentryStats[]");
        }
        inline app::ColosseumTower_SentryStats__Array* create() {
            return il2cpp::create_object<app::ColosseumTower_SentryStats__Array>(get_class());
        }
    } // namespace ColosseumTower_SentryStats__Array
} // namespace app::classes::types
