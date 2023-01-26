#pragma once
#include <Modloader/app/structs/StaticEntityLookBehaviour.h>
#include <Modloader/app/structs/StaticEntityLookBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticEntityLookBehaviour {
        inline app::StaticEntityLookBehaviour__Class** type_info() {
            static app::StaticEntityLookBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaticEntityLookBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaticEntityLookBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityLookBehaviour__Class>(type_info(), "", "StaticEntityLookBehaviour");
        }
        inline app::StaticEntityLookBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityLookBehaviour>(get_class());
        }
    } // namespace StaticEntityLookBehaviour
} // namespace app::classes::types
