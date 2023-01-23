#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompositeTriggerCollider__Class.h>
#include <Modloader/app/structs/CompositeTriggerCollider.h>

namespace app::classes::types {
    namespace CompositeTriggerCollider {
        namespace {
            inline app::CompositeTriggerCollider__Class* type_info_ref = nullptr;
        }
        inline app::CompositeTriggerCollider__Class** type_info = &type_info_ref;
        inline app::CompositeTriggerCollider__Class* get_class() {
            return il2cpp::get_class<app::CompositeTriggerCollider__Class>(type_info, "", "CompositeTriggerCollider");
        }
        inline app::CompositeTriggerCollider* create() {
            return il2cpp::create_object<app::CompositeTriggerCollider>(get_class());
        }
    } // namespace CompositeTriggerCollider
} // namespace app::classes::types
