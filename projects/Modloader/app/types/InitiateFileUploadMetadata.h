#pragma once
#include <Modloader/app/structs/InitiateFileUploadMetadata.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata__Array.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadMetadata {
        inline app::InitiateFileUploadMetadata__Class** type_info() {
            static app::InitiateFileUploadMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitiateFileUploadMetadata__Class**)(modloader::win::memory::resolve_rva(0x047382F0));
            }
            return cache;
        }
        inline app::InitiateFileUploadMetadata__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadMetadata__Class>(type_info(), "PlayFab.DataModels", "InitiateFileUploadMetadata");
        }
        inline app::InitiateFileUploadMetadata* create() {
            return il2cpp::create_object<app::InitiateFileUploadMetadata>(get_class());
        }
        inline app::InitiateFileUploadMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::InitiateFileUploadMetadata__Array>(get_class(), size);
        }
        inline app::InitiateFileUploadMetadata__Array* create_array(const std::vector<app::InitiateFileUploadMetadata*>& items) {
            return il2cpp::array_new<app::InitiateFileUploadMetadata__Array>(get_class(), items);
        }
    } // namespace InitiateFileUploadMetadata
} // namespace app::classes::types
