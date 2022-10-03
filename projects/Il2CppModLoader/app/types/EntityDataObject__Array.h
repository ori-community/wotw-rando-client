#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDataObject__Array {
        namespace {
            app::EntityDataObject__Array__Class* type_info_ref = nullptr;
        }
        app::EntityDataObject__Array__Class** type_info = &type_info_ref;
        inline app::EntityDataObject__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityDataObject__Array__Class>(type_info, "PlayFab.ProfilesModels", "EntityDataObject[]");
        }
        inline app::EntityDataObject__Array* create() {
            return il2cpp::create_object<app::EntityDataObject__Array>(get_class());
        }
    } // namespace EntityDataObject__Array
} // namespace app::classes::types
