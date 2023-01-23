#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityState__Class.h>
#include <Modloader/app/structs/EntityState.h>

namespace app::classes::types {
    namespace EntityState {
        namespace {
            inline app::EntityState__Class* type_info_ref = nullptr;
        }
        inline app::EntityState__Class** type_info = &type_info_ref;
        inline app::EntityState__Class* get_class() {
            return il2cpp::get_class<app::EntityState__Class>(type_info, "Moon", "EntityState");
        }
        inline app::EntityState* create() {
            return il2cpp::create_object<app::EntityState>(get_class());
        }
    } // namespace EntityState
} // namespace app::classes::types
