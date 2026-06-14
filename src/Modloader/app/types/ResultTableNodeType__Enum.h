#pragma once
#include <Modloader/app/structs/ResultTableNodeType__Enum.h>
#include <Modloader/app/structs/ResultTableNodeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResultTableNodeType__Enum {
        inline app::ResultTableNodeType__Enum__Class** type_info() {
            static app::ResultTableNodeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResultTableNodeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResultTableNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNodeType__Enum__Class>(type_info(), "PlayFab.ServerModels", "ResultTableNodeType");
        }
        inline app::ResultTableNodeType__Enum* create() {
            return il2cpp::create_object<app::ResultTableNodeType__Enum>(get_class());
        }
    } // namespace ResultTableNodeType__Enum
} // namespace app::classes::types
