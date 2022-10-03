#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FilterCollisionsByContactNormals {
        namespace {
            app::FilterCollisionsByContactNormals__Class* type_info_ref = nullptr;
        }
        app::FilterCollisionsByContactNormals__Class** type_info = &type_info_ref;
        inline app::FilterCollisionsByContactNormals__Class* get_class() {
            return il2cpp::get_class<app::FilterCollisionsByContactNormals__Class>(type_info, "Moon", "FilterCollisionsByContactNormals");
        }
        inline app::FilterCollisionsByContactNormals* create() {
            return il2cpp::create_object<app::FilterCollisionsByContactNormals>(get_class());
        }
    } // namespace FilterCollisionsByContactNormals
} // namespace app::classes::types
