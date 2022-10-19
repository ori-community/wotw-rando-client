#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent_EntityDataHeader__Enum {
        namespace {
            inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class** type_info = &type_info_ref;
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityDataCaptureAgent_EntityDataHeader__Enum__Class>(type_info, "", "EntityDataCaptureAgent", "EntityDataHeader");
        }
        inline app::EntityDataCaptureAgent_EntityDataHeader__Enum* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent_EntityDataHeader__Enum>(get_class());
        }
    } // namespace EntityDataCaptureAgent_EntityDataHeader__Enum
} // namespace app::classes::types
