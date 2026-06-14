#pragma once
#include <Modloader/app/structs/Statistics.h>
#include <Modloader/app/structs/Statistics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Statistics {
        inline app::Statistics__Class** type_info() {
            static app::Statistics__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Statistics__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Statistics__Class* get_class() {
            return il2cpp::get_class<app::Statistics__Class>(type_info(), "PlayFab.MultiplayerModels", "Statistics");
        }
        inline app::Statistics* create() {
            return il2cpp::create_object<app::Statistics>(get_class());
        }
    } // namespace Statistics
} // namespace app::classes::types
