#pragma once
#include <Modloader/app/structs/GameCertificateReferenceParams.h>
#include <Modloader/app/structs/GameCertificateReferenceParams__Array.h>
#include <Modloader/app/structs/GameCertificateReferenceParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCertificateReferenceParams {
        inline app::GameCertificateReferenceParams__Class** type_info() {
            static app::GameCertificateReferenceParams__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCertificateReferenceParams__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCertificateReferenceParams__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReferenceParams__Class>(type_info(), "PlayFab.MultiplayerModels", "GameCertificateReferenceParams");
        }
        inline app::GameCertificateReferenceParams* create() {
            return il2cpp::create_object<app::GameCertificateReferenceParams>(get_class());
        }
        inline app::GameCertificateReferenceParams__Array* create_array(int size) {
            return il2cpp::array_new<app::GameCertificateReferenceParams__Array>(get_class(), size);
        }
        inline app::GameCertificateReferenceParams__Array* create_array(const std::vector<app::GameCertificateReferenceParams*>& items) {
            return il2cpp::array_new<app::GameCertificateReferenceParams__Array>(get_class(), items);
        }
    } // namespace GameCertificateReferenceParams
} // namespace app::classes::types
