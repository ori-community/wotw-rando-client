#pragma once
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair__Array.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair__Array {
        inline app::XboxLiveAccountPlayFabIdPair__Array__Class** type_info() {
            static app::XboxLiveAccountPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxLiveAccountPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "XboxLiveAccountPlayFabIdPair[]");
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::XboxLiveAccountPlayFabIdPair__Array>(get_class());
        }
    } // namespace XboxLiveAccountPlayFabIdPair__Array
} // namespace app::classes::types
