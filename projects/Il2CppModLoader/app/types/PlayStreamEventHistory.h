#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayStreamEventHistory {
        namespace {
            inline app::PlayStreamEventHistory__Class* type_info_ref = nullptr;
        }
        inline app::PlayStreamEventHistory__Class** type_info = &type_info_ref;
        inline app::PlayStreamEventHistory__Class* get_class() {
            return il2cpp::get_class<app::PlayStreamEventHistory__Class>(type_info, "PlayFab.PlayStreamModels", "PlayStreamEventHistory");
        }
        inline app::PlayStreamEventHistory* create() {
            return il2cpp::create_object<app::PlayStreamEventHistory>(get_class());
        }
    } // namespace PlayStreamEventHistory
} // namespace app::classes::types
