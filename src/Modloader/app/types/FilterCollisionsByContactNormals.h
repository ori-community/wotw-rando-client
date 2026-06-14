#pragma once
#include <Modloader/app/structs/FilterCollisionsByContactNormals.h>
#include <Modloader/app/structs/FilterCollisionsByContactNormals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterCollisionsByContactNormals {
        inline app::FilterCollisionsByContactNormals__Class** type_info() {
            static app::FilterCollisionsByContactNormals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterCollisionsByContactNormals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterCollisionsByContactNormals__Class* get_class() {
            return il2cpp::get_class<app::FilterCollisionsByContactNormals__Class>(type_info(), "Moon", "FilterCollisionsByContactNormals");
        }
        inline app::FilterCollisionsByContactNormals* create() {
            return il2cpp::create_object<app::FilterCollisionsByContactNormals>(get_class());
        }
    } // namespace FilterCollisionsByContactNormals
} // namespace app::classes::types
