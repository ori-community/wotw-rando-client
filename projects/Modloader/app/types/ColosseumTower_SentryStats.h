#pragma once
#include <Modloader/app/structs/ColosseumTower_SentryStats.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Array.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Boxed.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumTower_SentryStats {
        inline app::ColosseumTower_SentryStats__Class** type_info() {
            static app::ColosseumTower_SentryStats__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumTower_SentryStats__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumTower_SentryStats__Class* get_class() {
            return il2cpp::get_nested_class<app::ColosseumTower_SentryStats__Class>(type_info(), "", "ColosseumTower", "SentryStats");
        }
        inline app::ColosseumTower_SentryStats* create() {
            return il2cpp::create_object<app::ColosseumTower_SentryStats>(get_class());
        }
        inline app::ColosseumTower_SentryStats__Boxed* box(app::ColosseumTower_SentryStats value) {
            return il2cpp::box_value<app::ColosseumTower_SentryStats__Boxed>(get_class(), value);
        }
        inline app::ColosseumTower_SentryStats__Array* create_array(int size) {
            return il2cpp::array_new<app::ColosseumTower_SentryStats__Array>(get_class(), size);
        }
        inline app::ColosseumTower_SentryStats__Array* create_array(const std::vector<app::ColosseumTower_SentryStats>& items) {
            return il2cpp::array_new<app::ColosseumTower_SentryStats__Array>(get_class(), items);
        }
    } // namespace ColosseumTower_SentryStats
} // namespace app::classes::types
