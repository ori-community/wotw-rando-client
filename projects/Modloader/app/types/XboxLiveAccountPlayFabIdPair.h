#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair {
        namespace {
            inline app::XboxLiveAccountPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::XboxLiveAccountPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::XboxLiveAccountPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "XboxLiveAccountPlayFabIdPair");
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
