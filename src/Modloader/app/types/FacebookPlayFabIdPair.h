#pragma once
#include <Modloader/app/structs/FacebookPlayFabIdPair.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair__Array.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacebookPlayFabIdPair {
        inline app::FacebookPlayFabIdPair__Class** type_info() {
            static app::FacebookPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacebookPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacebookPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::FacebookPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "FacebookPlayFabIdPair");
        }
        inline app::FacebookPlayFabIdPair* create() {
            return il2cpp::create_object<app::FacebookPlayFabIdPair>(get_class());
        }
        inline app::FacebookPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::FacebookPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::FacebookPlayFabIdPair__Array* create_array(const std::vector<app::FacebookPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::FacebookPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace FacebookPlayFabIdPair
} // namespace app::classes::types
