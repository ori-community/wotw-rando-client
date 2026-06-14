#pragma once
#include <Modloader/app/structs/GameCertificateReferenceParams__Array.h>
#include <Modloader/app/structs/GameCertificateReferenceParams__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCertificateReferenceParams__Array {
        inline app::GameCertificateReferenceParams__Array__Class** type_info() {
            static app::GameCertificateReferenceParams__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCertificateReferenceParams__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCertificateReferenceParams__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReferenceParams__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "GameCertificateReferenceParams[]");
        }
        inline app::GameCertificateReferenceParams__Array* create() {
            return il2cpp::create_object<app::GameCertificateReferenceParams__Array>(get_class());
        }
    } // namespace GameCertificateReferenceParams__Array
} // namespace app::classes::types
