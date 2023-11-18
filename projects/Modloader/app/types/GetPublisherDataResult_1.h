#pragma once
#include <Modloader/app/structs/GetPublisherDataResult_1.h>
#include <Modloader/app/structs/GetPublisherDataResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataResult_1 {
        inline app::GetPublisherDataResult_1__Class** type_info() {
            static app::GetPublisherDataResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPublisherDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471B690));
            }
            return cache;
        }
        inline app::GetPublisherDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult_1* create() {
            return il2cpp::create_object<app::GetPublisherDataResult_1>(get_class());
        }
    } // namespace GetPublisherDataResult_1
} // namespace app::classes::types
