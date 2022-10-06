#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PublishedFileId_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PublishedFileId_t__Class** type_info;
        inline app::PublishedFileId_t__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileId_t__Class>(type_info, "Steamworks", "PublishedFileId_t");
        }
        inline app::PublishedFileId_t* create() {
            return il2cpp::create_object<app::PublishedFileId_t>(get_class());
        }
        inline app::PublishedFileId_t__Boxed* box(app::PublishedFileId_t value) {
            return il2cpp::box_value<app::PublishedFileId_t__Boxed>(get_class(), value);
        }
        inline app::PublishedFileId_t__Array* create_array(int size) {
            return il2cpp::array_new<app::PublishedFileId_t__Array>(get_class(), size);
        }
        inline app::PublishedFileId_t__Array* create_array(const std::vector<app::PublishedFileId_t__Boxed>& items) {
            return il2cpp::array_new<app::PublishedFileId_t__Array>(get_class(), items);
        }
    } // namespace PublishedFileId_t
} // namespace app::classes::types
