#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair__Array {
        namespace {
            inline app::XboxLiveAccountPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::XboxLiveAccountPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "XboxLiveAccountPlayFabIdPair[]");
        }
        inline app::XboxLiveAccountPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::XboxLiveAccountPlayFabIdPair__Array>(get_class());
        }
    } // namespace XboxLiveAccountPlayFabIdPair__Array
} // namespace app::classes::types
