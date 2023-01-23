#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityOwnedInitOrder__Enum__Class.h>
#include <Modloader/app/structs/EntityOwnedInitOrder__Enum.h>

namespace app::classes::types {
    namespace EntityOwnedInitOrder__Enum {
        namespace {
            inline app::EntityOwnedInitOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EntityOwnedInitOrder__Enum__Class** type_info = &type_info_ref;
        inline app::EntityOwnedInitOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityOwnedInitOrder__Enum__Class>(type_info, "Moon", "EntityOwnedInitOrder");
        }
        inline app::EntityOwnedInitOrder__Enum* create() {
            return il2cpp::create_object<app::EntityOwnedInitOrder__Enum>(get_class());
        }
    } // namespace EntityOwnedInitOrder__Enum
} // namespace app::classes::types
