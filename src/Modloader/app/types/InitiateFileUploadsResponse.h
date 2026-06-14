#pragma once
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>
#include <Modloader/app/structs/InitiateFileUploadsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadsResponse {
        inline app::InitiateFileUploadsResponse__Class** type_info() {
            static app::InitiateFileUploadsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitiateFileUploadsResponse__Class**)(modloader::win::memory::resolve_rva(0x047469B0));
            }
            return cache;
        }
        inline app::InitiateFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadsResponse__Class>(type_info(), "PlayFab.DataModels", "InitiateFileUploadsResponse");
        }
        inline app::InitiateFileUploadsResponse* create() {
            return il2cpp::create_object<app::InitiateFileUploadsResponse>(get_class());
        }
    } // namespace InitiateFileUploadsResponse
} // namespace app::classes::types
