#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PublishedFileId_t__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PublishedFileId_t__Array__Class** type_info;
        inline app::PublishedFileId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileId_t__Array__Class>(type_info, "Steamworks", "PublishedFileId_t[]");
        }
        inline app::PublishedFileId_t__Array* create() {
            return il2cpp::create_object<app::PublishedFileId_t__Array>(get_class());
        }
    } // namespace PublishedFileId_t__Array
} // namespace app::classes::types
