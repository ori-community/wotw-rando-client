#pragma once
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Array.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair__Array {
        inline app::PSNAccountPlayFabIdPair__Array__Class** type_info() {
            static app::PSNAccountPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PSNAccountPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PSNAccountPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "PSNAccountPlayFabIdPair[]");
        }
        inline app::PSNAccountPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::PSNAccountPlayFabIdPair__Array>(get_class());
        }
    } // namespace PSNAccountPlayFabIdPair__Array
} // namespace app::classes::types
