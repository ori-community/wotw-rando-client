#pragma once
#include <Modloader/app/structs/ResultTableNode__Array.h>
#include <Modloader/app/structs/ResultTableNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResultTableNode__Array {
        inline app::ResultTableNode__Array__Class** type_info() {
            static app::ResultTableNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResultTableNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResultTableNode__Array__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNode__Array__Class>(type_info(), "PlayFab.ServerModels", "ResultTableNode[]");
        }
        inline app::ResultTableNode__Array* create() {
            return il2cpp::create_object<app::ResultTableNode__Array>(get_class());
        }
    } // namespace ResultTableNode__Array
} // namespace app::classes::types
