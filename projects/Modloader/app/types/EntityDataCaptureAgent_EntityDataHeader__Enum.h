#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityDataCaptureAgent_EntityDataHeader__Enum__Class.h>
#include <Modloader/app/structs/EntityDataCaptureAgent_EntityDataHeader__Enum.h>

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
