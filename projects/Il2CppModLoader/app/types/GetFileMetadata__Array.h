#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFileMetadata__Array {
        namespace {
            app::GetFileMetadata__Array__Class* type_info_ref = nullptr;
        }
        app::GetFileMetadata__Array__Class** type_info = &type_info_ref;
        inline app::GetFileMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::GetFileMetadata__Array__Class>(type_info, "PlayFab.DataModels", "GetFileMetadata[]");
        }
        inline app::GetFileMetadata__Array* create() {
            return il2cpp::create_object<app::GetFileMetadata__Array>(get_class());
        }
    } // namespace GetFileMetadata__Array
} // namespace app::classes::types
