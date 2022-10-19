#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair {
        namespace {
            inline app::PSNAccountPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::PSNAccountPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::PSNAccountPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "PSNAccountPlayFabIdPair");
        }
        inline app::PSNAccountPlayFabIdPair* create() {
            return il2cpp::create_object<app::PSNAccountPlayFabIdPair>(get_class());
        }
        inline app::PSNAccountPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::PSNAccountPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::PSNAccountPlayFabIdPair__Array* create_array(const std::vector<app::PSNAccountPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::PSNAccountPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace PSNAccountPlayFabIdPair
} // namespace app::classes::types
