#pragma once
#include <Modloader/app/structs/TriggerColliderCallback.h>
#include <Modloader/app/structs/TriggerColliderCallback__Array.h>
#include <Modloader/app/structs/TriggerColliderCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback {
        inline app::TriggerColliderCallback__Class** type_info() {
            static app::TriggerColliderCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerColliderCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerColliderCallback__Class* get_class() {
            return il2cpp::get_class<app::TriggerColliderCallback__Class>(type_info(), "", "TriggerColliderCallback");
        }
        inline app::TriggerColliderCallback* create() {
            return il2cpp::create_object<app::TriggerColliderCallback>(get_class());
        }
        inline app::TriggerColliderCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::TriggerColliderCallback__Array>(get_class(), size);
        }
        inline app::TriggerColliderCallback__Array* create_array(const std::vector<app::TriggerColliderCallback*>& items) {
            return il2cpp::array_new<app::TriggerColliderCallback__Array>(get_class(), items);
        }
    } // namespace TriggerColliderCallback
} // namespace app::classes::types
