#pragma once
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair__Array.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair {
        inline app::XboxLiveAccountPlayFabIdPair__Class** type_info() {
            static app::XboxLiveAccountPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxLiveAccountPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxLiveAccountPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "XboxLiveAccountPlayFabIdPair");
        }
        inline app::XboxLiveAccountPlayFabIdPair* create() {
            return il2cpp::create_object<app::XboxLiveAccountPlayFabIdPair>(get_class());
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxLiveAccountPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array* create_array(const std::vector<app::XboxLiveAccountPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::XboxLiveAccountPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace XboxLiveAccountPlayFabIdPair
} // namespace app::classes::types
