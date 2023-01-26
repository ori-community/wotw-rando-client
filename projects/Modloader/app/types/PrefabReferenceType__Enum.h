#pragma once
#include <Modloader/app/structs/PrefabReferenceType__Enum.h>
#include <Modloader/app/structs/PrefabReferenceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrefabReferenceType__Enum {
        inline app::PrefabReferenceType__Enum__Class** type_info() {
            static app::PrefabReferenceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrefabReferenceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrefabReferenceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrefabReferenceType__Enum__Class>(type_info(), "Moon.Timeline", "PrefabReferenceType");
        }
        inline app::PrefabReferenceType__Enum* create() {
            return il2cpp::create_object<app::PrefabReferenceType__Enum>(get_class());
        }
    } // namespace PrefabReferenceType__Enum
} // namespace app::classes::types
