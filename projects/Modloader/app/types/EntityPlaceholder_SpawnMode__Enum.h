#pragma once
#include <Modloader/app/structs/EntityPlaceholder_SpawnMode__Enum.h>
#include <Modloader/app/structs/EntityPlaceholder_SpawnMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_SpawnMode__Enum {
        inline app::EntityPlaceholder_SpawnMode__Enum__Class** type_info() {
            static app::EntityPlaceholder_SpawnMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityPlaceholder_SpawnMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047907B8));
            }
            return cache;
        }
        inline app::EntityPlaceholder_SpawnMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_SpawnMode__Enum__Class>(type_info(), "", "EntityPlaceholder", "SpawnMode");
        }
        inline app::EntityPlaceholder_SpawnMode__Enum* create() {
            return il2cpp::create_object<app::EntityPlaceholder_SpawnMode__Enum>(get_class());
        }
    } // namespace EntityPlaceholder_SpawnMode__Enum
} // namespace app::classes::types
