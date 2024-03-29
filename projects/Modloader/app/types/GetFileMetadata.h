#pragma once
#include <Modloader/app/structs/GetFileMetadata.h>
#include <Modloader/app/structs/GetFileMetadata__Array.h>
#include <Modloader/app/structs/GetFileMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFileMetadata {
        inline app::GetFileMetadata__Class** type_info() {
            static app::GetFileMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFileMetadata__Class**)(modloader::win::memory::resolve_rva(0x047721B0));
            }
            return cache;
        }
        inline app::GetFileMetadata__Class* get_class() {
            return il2cpp::get_class<app::GetFileMetadata__Class>(type_info(), "PlayFab.DataModels", "GetFileMetadata");
        }
        inline app::GetFileMetadata* create() {
            return il2cpp::create_object<app::GetFileMetadata>(get_class());
        }
        inline app::GetFileMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::GetFileMetadata__Array>(get_class(), size);
        }
        inline app::GetFileMetadata__Array* create_array(const std::vector<app::GetFileMetadata*>& items) {
            return il2cpp::array_new<app::GetFileMetadata__Array>(get_class(), items);
        }
    } // namespace GetFileMetadata
} // namespace app::classes::types
