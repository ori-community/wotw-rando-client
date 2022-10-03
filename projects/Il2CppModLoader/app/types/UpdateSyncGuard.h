#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateSyncGuard {
        namespace {
            app::UpdateSyncGuard__Class* type_info_ref = nullptr;
        }
        app::UpdateSyncGuard__Class** type_info = &type_info_ref;
        inline app::UpdateSyncGuard__Class* get_class() {
            return il2cpp::get_class<app::UpdateSyncGuard__Class>(type_info, "", "UpdateSyncGuard");
        }
        inline app::UpdateSyncGuard* create() {
            return il2cpp::create_object<app::UpdateSyncGuard>(get_class());
        }
        inline app::UpdateSyncGuard__Boxed* box(app::UpdateSyncGuard value) {
            return il2cpp::box_value<app::UpdateSyncGuard__Boxed>(get_class(), value);
        }
    } // namespace UpdateSyncGuard
} // namespace app::classes::types
