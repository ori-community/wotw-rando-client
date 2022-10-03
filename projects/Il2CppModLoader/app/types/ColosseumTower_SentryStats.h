#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColosseumTower_SentryStats {
        namespace {
            app::ColosseumTower_SentryStats__Class* type_info_ref = nullptr;
        }
        app::ColosseumTower_SentryStats__Class** type_info = &type_info_ref;
        inline app::ColosseumTower_SentryStats__Class* get_class() {
            return il2cpp::get_nested_class<app::ColosseumTower_SentryStats__Class>(type_info, "", "ColosseumTower", "SentryStats");
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
    } // namespace ColosseumTower_SentryStats
} // namespace app::classes::types
