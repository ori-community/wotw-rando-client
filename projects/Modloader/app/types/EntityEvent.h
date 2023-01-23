#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityEvent__Class.h>
#include <Modloader/app/structs/EntityEvent.h>

namespace app::classes::types {
    namespace EntityEvent {
        namespace {
            inline app::EntityEvent__Class* type_info_ref = nullptr;
        }
        inline app::EntityEvent__Class** type_info = &type_info_ref;
        inline app::EntityEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityEvent__Class>(type_info, "Moon", "EntityEvent");
        }
        inline app::EntityEvent* create() {
            return il2cpp::create_object<app::EntityEvent>(get_class());
        }
    } // namespace EntityEvent
} // namespace app::classes::types
