#pragma once
#include <Modloader/app/structs/FinalizeFileUploadsResponse.h>
#include <Modloader/app/structs/FinalizeFileUploadsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinalizeFileUploadsResponse {
        inline app::FinalizeFileUploadsResponse__Class** type_info() {
            static app::FinalizeFileUploadsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FinalizeFileUploadsResponse__Class**)(modloader::win::memory::resolve_rva(0x04730290));
            }
            return cache;
        }
        inline app::FinalizeFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::FinalizeFileUploadsResponse__Class>(type_info(), "PlayFab.DataModels", "FinalizeFileUploadsResponse");
        }
        inline app::FinalizeFileUploadsResponse* create() {
            return il2cpp::create_object<app::FinalizeFileUploadsResponse>(get_class());
        }
    } // namespace FinalizeFileUploadsResponse
} // namespace app::classes::types
