#pragma once
#include <Modloader/app/structs/EntityDataCaptureAgent_EntityDataHeader__Enum.h>
#include <Modloader/app/structs/EntityDataCaptureAgent_EntityDataHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent_EntityDataHeader__Enum {
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class** type_info() {
            static app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class>(type_info(), "", "EntityDataCaptureAgent", "EntityDataHeader");
        }
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent_EntityDataHeader__Enum>(get_class());
        }
    } // namespace EntityDataCaptureAgent_EntityDataHeader__Enum
} // namespace app::classes::types
