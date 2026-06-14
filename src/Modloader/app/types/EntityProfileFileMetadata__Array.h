#pragma once
#include <Modloader/app/structs/EntityProfileFileMetadata__Array.h>
#include <Modloader/app/structs/EntityProfileFileMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityProfileFileMetadata__Array {
        inline app::EntityProfileFileMetadata__Array__Class** type_info() {
            static app::EntityProfileFileMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityProfileFileMetadata__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityProfileFileMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileFileMetadata__Array__Class>(type_info(), "PlayFab.ProfilesModels", "EntityProfileFileMetadata[]");
        }
        inline app::EntityProfileFileMetadata__Array* create() {
            return il2cpp::create_object<app::EntityProfileFileMetadata__Array>(get_class());
        }
    } // namespace EntityProfileFileMetadata__Array
} // namespace app::classes::types
