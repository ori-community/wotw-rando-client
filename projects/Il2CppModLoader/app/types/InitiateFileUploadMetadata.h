#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadMetadata {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitiateFileUploadMetadata__Class** type_info;
        inline app::InitiateFileUploadMetadata__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadMetadata__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadMetadata");
        }
        inline app::InitiateFileUploadMetadata* create() {
            return il2cpp::create_object<app::InitiateFileUploadMetadata>(get_class());
        }
        inline app::InitiateFileUploadMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::InitiateFileUploadMetadata__Array>(get_class(), size);
        }
    } // namespace InitiateFileUploadMetadata
} // namespace app::classes::types
