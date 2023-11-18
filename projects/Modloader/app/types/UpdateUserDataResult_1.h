#pragma once
#include <Modloader/app/structs/UpdateUserDataResult_1.h>
#include <Modloader/app/structs/UpdateUserDataResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataResult_1 {
        inline app::UpdateUserDataResult_1__Class** type_info() {
            static app::UpdateUserDataResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04763738));
            }
            return cache;
        }
        inline app::UpdateUserDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataResult_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateUserDataResult");
        }
        inline app::UpdateUserDataResult_1* create() {
            return il2cpp::create_object<app::UpdateUserDataResult_1>(get_class());
        }
    } // namespace UpdateUserDataResult_1
} // namespace app::classes::types
