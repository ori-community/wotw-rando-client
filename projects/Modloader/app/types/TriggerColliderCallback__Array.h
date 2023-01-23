#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggerColliderCallback__Array__Class.h>
#include <Modloader/app/structs/TriggerColliderCallback__Array.h>

namespace app::classes::types {
    namespace TriggerColliderCallback__Array {
        namespace {
            inline app::TriggerColliderCallback__Array__Class* type_info_ref = nullptr;
        }
        inline app::TriggerColliderCallback__Array__Class** type_info = &type_info_ref;
        inline app::TriggerColliderCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::TriggerColliderCallback__Array__Class>(type_info, "", "TriggerColliderCallback[]");
        }
        inline app::TriggerColliderCallback__Array* create() {
            return il2cpp::create_object<app::TriggerColliderCallback__Array>(get_class());
        }
    } // namespace TriggerColliderCallback__Array
} // namespace app::classes::types
