#pragma once
#include <Modloader/app/structs/FacebookPlayFabIdPair__Array.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacebookPlayFabIdPair__Array {
        inline app::FacebookPlayFabIdPair__Array__Class** type_info() {
            static app::FacebookPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacebookPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacebookPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::FacebookPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "FacebookPlayFabIdPair[]");
        }
        inline app::FacebookPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::FacebookPlayFabIdPair__Array>(get_class());
        }
    } // namespace FacebookPlayFabIdPair__Array
} // namespace app::classes::types
