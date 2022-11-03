#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity_Habitat__Enum {
        namespace {
            inline app::SandWormEntity_Habitat__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_Habitat__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_Habitat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_Habitat__Enum__Class>(type_info, "", "SandWormEntity", "Habitat");
        }
        inline app::SandWormEntity_Habitat__Enum* create() {
            return il2cpp::create_object<app::SandWormEntity_Habitat__Enum>(get_class());
        }
    } // namespace SandWormEntity_Habitat__Enum
} // namespace app::classes::types
