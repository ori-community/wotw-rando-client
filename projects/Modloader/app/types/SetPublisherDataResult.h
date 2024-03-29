#pragma once
#include <Modloader/app/structs/SetPublisherDataResult.h>
#include <Modloader/app/structs/SetPublisherDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetPublisherDataResult {
        inline app::SetPublisherDataResult__Class** type_info() {
            static app::SetPublisherDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetPublisherDataResult__Class**)(modloader::win::memory::resolve_rva(0x0478FEA8));
            }
            return cache;
        }
        inline app::SetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetPublisherDataResult__Class>(type_info(), "PlayFab.ServerModels", "SetPublisherDataResult");
        }
        inline app::SetPublisherDataResult* create() {
            return il2cpp::create_object<app::SetPublisherDataResult>(get_class());
        }
    } // namespace SetPublisherDataResult
} // namespace app::classes::types
