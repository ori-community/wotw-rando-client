#pragma once
#include <Modloader/app/structs/GameInfo.h>
#include <Modloader/app/structs/GameInfo__Array.h>
#include <Modloader/app/structs/GameInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameInfo {
        inline app::GameInfo__Class** type_info() {
            static app::GameInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameInfo__Class* get_class() {
            return il2cpp::get_class<app::GameInfo__Class>(type_info(), "PlayFab.ClientModels", "GameInfo");
        }
        inline app::GameInfo* create() {
            return il2cpp::create_object<app::GameInfo>(get_class());
        }
        inline app::GameInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::GameInfo__Array>(get_class(), size);
        }
        inline app::GameInfo__Array* create_array(const std::vector<app::GameInfo*>& items) {
            return il2cpp::array_new<app::GameInfo__Array>(get_class(), items);
        }
    } // namespace GameInfo
} // namespace app::classes::types
