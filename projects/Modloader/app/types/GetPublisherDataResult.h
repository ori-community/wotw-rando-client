#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPublisherDataResult {
        inline app::GetPublisherDataResult__Class** type_info = (app::GetPublisherDataResult__Class**)(modloader::win::memory::resolve_rva(0x04747630));
        inline app::GetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult__Class>(type_info, "PlayFab.ClientModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult* create() {
            return il2cpp::create_object<app::GetPublisherDataResult>(get_class());
        }
    } // namespace GetPublisherDataResult
} // namespace app::classes::types
