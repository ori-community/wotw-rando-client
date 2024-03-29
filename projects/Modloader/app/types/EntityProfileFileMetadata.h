#pragma once
#include <Modloader/app/structs/EntityProfileFileMetadata.h>
#include <Modloader/app/structs/EntityProfileFileMetadata__Array.h>
#include <Modloader/app/structs/EntityProfileFileMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityProfileFileMetadata {
        inline app::EntityProfileFileMetadata__Class** type_info() {
            static app::EntityProfileFileMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityProfileFileMetadata__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityProfileFileMetadata__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileFileMetadata__Class>(type_info(), "PlayFab.ProfilesModels", "EntityProfileFileMetadata");
        }
        inline app::EntityProfileFileMetadata* create() {
            return il2cpp::create_object<app::EntityProfileFileMetadata>(get_class());
        }
        inline app::EntityProfileFileMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityProfileFileMetadata__Array>(get_class(), size);
        }
        inline app::EntityProfileFileMetadata__Array* create_array(const std::vector<app::EntityProfileFileMetadata*>& items) {
            return il2cpp::array_new<app::EntityProfileFileMetadata__Array>(get_class(), items);
        }
    } // namespace EntityProfileFileMetadata
} // namespace app::classes::types
