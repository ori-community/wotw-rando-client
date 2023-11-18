#pragma once
#include <Modloader/app/structs/GameCertificateReference.h>
#include <Modloader/app/structs/GameCertificateReference__Array.h>
#include <Modloader/app/structs/GameCertificateReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCertificateReference {
        inline app::GameCertificateReference__Class** type_info() {
            static app::GameCertificateReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCertificateReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCertificateReference__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReference__Class>(type_info(), "PlayFab.MultiplayerModels", "GameCertificateReference");
        }
        inline app::GameCertificateReference* create() {
            return il2cpp::create_object<app::GameCertificateReference>(get_class());
        }
        inline app::GameCertificateReference__Array* create_array(int size) {
            return il2cpp::array_new<app::GameCertificateReference__Array>(get_class(), size);
        }
        inline app::GameCertificateReference__Array* create_array(const std::vector<app::GameCertificateReference*>& items) {
            return il2cpp::array_new<app::GameCertificateReference__Array>(get_class(), items);
        }
    } // namespace GameCertificateReference
} // namespace app::classes::types
