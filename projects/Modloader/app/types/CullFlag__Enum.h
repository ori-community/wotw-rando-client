#pragma once
#include <Modloader/app/structs/CullFlag__Enum.h>
#include <Modloader/app/structs/CullFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullFlag__Enum {
        inline app::CullFlag__Enum__Class** type_info() {
            static app::CullFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CullFlag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CullFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullFlag__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "CullFlag");
        }
        inline app::CullFlag__Enum* create() {
            return il2cpp::create_object<app::CullFlag__Enum>(get_class());
        }
    } // namespace CullFlag__Enum
} // namespace app::classes::types
