#pragma once
#include <Modloader/app/structs/ResetTriggerOnCheckpoint.h>
#include <Modloader/app/structs/ResetTriggerOnCheckpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResetTriggerOnCheckpoint {
        inline app::ResetTriggerOnCheckpoint__Class** type_info() {
            static app::ResetTriggerOnCheckpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResetTriggerOnCheckpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResetTriggerOnCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::ResetTriggerOnCheckpoint__Class>(type_info(), "", "ResetTriggerOnCheckpoint");
        }
        inline app::ResetTriggerOnCheckpoint* create() {
            return il2cpp::create_object<app::ResetTriggerOnCheckpoint>(get_class());
        }
    } // namespace ResetTriggerOnCheckpoint
} // namespace app::classes::types
