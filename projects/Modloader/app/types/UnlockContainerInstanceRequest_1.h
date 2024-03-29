#pragma once
#include <Modloader/app/structs/UnlockContainerInstanceRequest_1.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerInstanceRequest_1 {
        inline app::UnlockContainerInstanceRequest_1__Class** type_info() {
            static app::UnlockContainerInstanceRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlockContainerInstanceRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04766B78));
            }
            return cache;
        }
        inline app::UnlockContainerInstanceRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerInstanceRequest_1__Class>(type_info(), "PlayFab.ServerModels", "UnlockContainerInstanceRequest");
        }
        inline app::UnlockContainerInstanceRequest_1* create() {
            return il2cpp::create_object<app::UnlockContainerInstanceRequest_1>(get_class());
        }
    } // namespace UnlockContainerInstanceRequest_1
} // namespace app::classes::types
