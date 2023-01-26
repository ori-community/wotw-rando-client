#pragma once
#include <Modloader/app/structs/PSNAccountPlayFabIdPair.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Array.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair {
        inline app::PSNAccountPlayFabIdPair__Class** type_info() {
            static app::PSNAccountPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PSNAccountPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PSNAccountPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "PSNAccountPlayFabIdPair");
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
