#pragma once
#include <Modloader/app/structs/WaitForTriggerEntity.h>
#include <Modloader/app/structs/WaitForTriggerEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForTriggerEntity {
        inline app::WaitForTriggerEntity__Class** type_info() {
            static app::WaitForTriggerEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForTriggerEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForTriggerEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForTriggerEntity__Class>(type_info(), "Moon.Timeline", "WaitForTriggerEntity");
        }
        inline app::WaitForTriggerEntity* create() {
            return il2cpp::create_object<app::WaitForTriggerEntity>(get_class());
        }
    } // namespace WaitForTriggerEntity
} // namespace app::classes::types
