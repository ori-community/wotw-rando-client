#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair_1 {
        namespace {
            app::XboxLiveAccountPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        app::XboxLiveAccountPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::XboxLiveAccountPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "XboxLiveAccountPlayFabIdPair");
        }
        inline app::XboxLiveAccountPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::XboxLiveAccountPlayFabIdPair_1>(get_class());
        }
        inline app::XboxLiveAccountPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxLiveAccountPlayFabIdPair_1__Array>(get_class(), size);
        }
    } // namespace XboxLiveAccountPlayFabIdPair_1
} // namespace app::classes::types
