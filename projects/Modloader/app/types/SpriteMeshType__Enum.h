#pragma once
#include <Modloader/app/structs/SpriteMeshType__Enum.h>
#include <Modloader/app/structs/SpriteMeshType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteMeshType__Enum {
        inline app::SpriteMeshType__Enum__Class** type_info() {
            static app::SpriteMeshType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteMeshType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteMeshType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpriteMeshType__Enum__Class>(type_info(), "UnityEngine", "SpriteMeshType");
        }
        inline app::SpriteMeshType__Enum* create() {
            return il2cpp::create_object<app::SpriteMeshType__Enum>(get_class());
        }
    } // namespace SpriteMeshType__Enum
} // namespace app::classes::types
