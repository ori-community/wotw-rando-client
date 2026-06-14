#pragma once
#include <Modloader/app/structs/GameCertificateReference__Array.h>
#include <Modloader/app/structs/GameCertificateReference__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCertificateReference__Array {
        inline app::GameCertificateReference__Array__Class** type_info() {
            static app::GameCertificateReference__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCertificateReference__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCertificateReference__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReference__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "GameCertificateReference[]");
        }
        inline app::GameCertificateReference__Array* create() {
            return il2cpp::create_object<app::GameCertificateReference__Array>(get_class());
        }
    } // namespace GameCertificateReference__Array
} // namespace app::classes::types
