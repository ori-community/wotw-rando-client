#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFileMetadata__Array {
        namespace {
            inline app::GetFileMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::GetFileMetadata__Array__Class** type_info = &type_info_ref;
        inline app::GetFileMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::GetFileMetadata__Array__Class>(type_info, "PlayFab.DataModels", "GetFileMetadata[]");
        }
        inline app::GetFileMetadata__Array* create() {
            return il2cpp::create_object<app::GetFileMetadata__Array>(get_class());
        }
    } // namespace GetFileMetadata__Array
} // namespace app::classes::types
