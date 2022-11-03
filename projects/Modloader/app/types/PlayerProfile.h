#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerProfile {
        namespace {
            inline app::PlayerProfile__Class* type_info_ref = nullptr;
        }
        inline app::PlayerProfile__Class** type_info = &type_info_ref;
        inline app::PlayerProfile__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfile__Class>(type_info, "PlayFab.ServerModels", "PlayerProfile");
        }
        inline app::PlayerProfile* create() {
            return il2cpp::create_object<app::PlayerProfile>(get_class());
        }
        inline app::PlayerProfile__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerProfile__Array>(get_class(), size);
        }
        inline app::PlayerProfile__Array* create_array(const std::vector<app::PlayerProfile*>& items) {
            return il2cpp::array_new<app::PlayerProfile__Array>(get_class(), items);
        }
    } // namespace PlayerProfile
} // namespace app::classes::types
