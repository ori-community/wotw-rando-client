#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent_EntityDataHeader__Enum {
        namespace {
            app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class** type_info = &type_info_ref;
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class>(type_info, "", "EntityDataCaptureAgent", "EntityDataHeader");
        }
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent_EntityDataHeader__Enum>(get_class());
        }
    } // namespace EntityDataCaptureAgent_EntityDataHeader__Enum
} // namespace app::classes::types
