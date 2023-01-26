#pragma once
#include <Modloader/app/structs/InitiateFileUploadMetadata__Array.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadMetadata__Array {
        inline app::InitiateFileUploadMetadata__Array__Class** type_info() {
            static app::InitiateFileUploadMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InitiateFileUploadMetadata__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InitiateFileUploadMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadMetadata__Array__Class>(type_info(), "PlayFab.DataModels", "InitiateFileUploadMetadata[]");
        }
        inline app::InitiateFileUploadMetadata__Array* create() {
            return il2cpp::create_object<app::InitiateFileUploadMetadata__Array>(get_class());
        }
    } // namespace InitiateFileUploadMetadata__Array
} // namespace app::classes::types
