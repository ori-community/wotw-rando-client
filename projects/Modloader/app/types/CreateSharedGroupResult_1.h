#pragma once
#include <Modloader/app/structs/CreateSharedGroupResult_1.h>
#include <Modloader/app/structs/CreateSharedGroupResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupResult_1 {
        inline app::CreateSharedGroupResult_1__Class** type_info() {
            static app::CreateSharedGroupResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateSharedGroupResult_1__Class**)(modloader::win::memory::resolve_rva(0x04735B20));
            }
            return cache;
        }
        inline app::CreateSharedGroupResult_1__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupResult_1__Class>(type_info(), "PlayFab.ServerModels", "CreateSharedGroupResult");
        }
        inline app::CreateSharedGroupResult_1* create() {
            return il2cpp::create_object<app::CreateSharedGroupResult_1>(get_class());
        }
    } // namespace CreateSharedGroupResult_1
} // namespace app::classes::types
