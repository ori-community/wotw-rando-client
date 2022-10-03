#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameCertificateReference {
        namespace {
            app::GameCertificateReference__Class* type_info_ref = nullptr;
        }
        app::GameCertificateReference__Class** type_info = &type_info_ref;
        inline app::GameCertificateReference__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReference__Class>(type_info, "PlayFab.MultiplayerModels", "GameCertificateReference");
        }
        inline app::GameCertificateReference* create() {
            return il2cpp::create_object<app::GameCertificateReference>(get_class());
        }
        inline app::GameCertificateReference__Array* create_array(int size) {
            return il2cpp::array_new<app::GameCertificateReference__Array>(get_class(), size);
        }
    } // namespace GameCertificateReference
} // namespace app::classes::types
