#pragma once
#include <Modloader/app/structs/GetPublisherDataResult.h>
#include <Modloader/app/structs/GetPublisherDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataResult {
        inline app::GetPublisherDataResult__Class** type_info() {
            static app::GetPublisherDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPublisherDataResult__Class**)(modloader::win::memory::resolve_rva(0x04747630));
            }
            return cache;
        }
        inline app::GetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult__Class>(type_info(), "PlayFab.ClientModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult* create() {
            return il2cpp::create_object<app::GetPublisherDataResult>(get_class());
        }
    } // namespace GetPublisherDataResult
} // namespace app::classes::types
