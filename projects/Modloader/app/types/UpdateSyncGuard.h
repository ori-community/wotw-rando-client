#pragma once
#include <Modloader/app/structs/UpdateSyncGuard.h>
#include <Modloader/app/structs/UpdateSyncGuard__Boxed.h>
#include <Modloader/app/structs/UpdateSyncGuard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateSyncGuard {
        inline app::UpdateSyncGuard__Class** type_info() {
            static app::UpdateSyncGuard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateSyncGuard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateSyncGuard__Class* get_class() {
            return il2cpp::get_class<app::UpdateSyncGuard__Class>(type_info(), "", "UpdateSyncGuard");
        }
        inline app::UpdateSyncGuard* create() {
            return il2cpp::create_object<app::UpdateSyncGuard>(get_class());
        }
        inline app::UpdateSyncGuard__Boxed* box(app::UpdateSyncGuard value) {
            return il2cpp::box_value<app::UpdateSyncGuard__Boxed>(get_class(), value);
        }
    } // namespace UpdateSyncGuard
} // namespace app::classes::types
