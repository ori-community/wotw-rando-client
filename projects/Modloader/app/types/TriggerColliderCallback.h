#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerColliderCallback {
        namespace {
            inline app::TriggerColliderCallback__Class* type_info_ref = nullptr;
        }
        inline app::TriggerColliderCallback__Class** type_info = &type_info_ref;
        inline app::TriggerColliderCallback__Class* get_class() {
            return il2cpp::get_class<app::TriggerColliderCallback__Class>(type_info, "", "TriggerColliderCallback");
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
