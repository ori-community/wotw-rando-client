#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityProfileFileMetadata__Array {
        namespace {
            app::EntityProfileFileMetadata__Array__Class* type_info_ref = nullptr;
        }
        app::EntityProfileFileMetadata__Array__Class** type_info = &type_info_ref;
        inline app::EntityProfileFileMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileFileMetadata__Array__Class>(type_info, "PlayFab.ProfilesModels", "EntityProfileFileMetadata[]");
        }
        inline app::EntityProfileFileMetadata__Array* create() {
            return il2cpp::create_object<app::EntityProfileFileMetadata__Array>(get_class());
        }
    } // namespace EntityProfileFileMetadata__Array
} // namespace app::classes::types
