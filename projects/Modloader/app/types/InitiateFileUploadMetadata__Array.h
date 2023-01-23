#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata__Array__Class.h>
#include <Modloader/app/structs/InitiateFileUploadMetadata__Array.h>

namespace app::classes::types {
    namespace InitiateFileUploadMetadata__Array {
        namespace {
            inline app::InitiateFileUploadMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::InitiateFileUploadMetadata__Array__Class** type_info = &type_info_ref;
        inline app::InitiateFileUploadMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadMetadata__Array__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadMetadata[]");
        }
        inline app::InitiateFileUploadMetadata__Array* create() {
            return il2cpp::create_object<app::InitiateFileUploadMetadata__Array>(get_class());
        }
    } // namespace InitiateFileUploadMetadata__Array
} // namespace app::classes::types
