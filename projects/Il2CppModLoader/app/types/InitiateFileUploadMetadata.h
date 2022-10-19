#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitiateFileUploadMetadata {
        inline app::InitiateFileUploadMetadata__Class** type_info = (app::InitiateFileUploadMetadata__Class**)(modloader::win::memory::resolve_rva(0x047382F0));
        inline app::InitiateFileUploadMetadata__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadMetadata__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadMetadata");
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
