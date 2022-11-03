#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPublisherDataResult_1 {
        inline app::GetPublisherDataResult_1__Class** type_info = (app::GetPublisherDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471B690));
        inline app::GetPublisherDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult_1* create() {
            return il2cpp::create_object<app::GetPublisherDataResult_1>(get_class());
        }
    } // namespace GetPublisherDataResult_1
} // namespace app::classes::types
