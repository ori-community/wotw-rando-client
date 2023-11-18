#pragma once
#include <Modloader/app/structs/Certificate.h>
#include <Modloader/app/structs/Certificate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Certificate {
        inline app::Certificate__Class** type_info() {
            static app::Certificate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Certificate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Certificate__Class* get_class() {
            return il2cpp::get_class<app::Certificate__Class>(type_info(), "PlayFab.MultiplayerModels", "Certificate");
        }
        inline app::Certificate* create() {
            return il2cpp::create_object<app::Certificate>(get_class());
        }
    } // namespace Certificate
} // namespace app::classes::types
