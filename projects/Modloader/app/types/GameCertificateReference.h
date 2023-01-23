#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameCertificateReference__Class.h>
#include <Modloader/app/structs/GameCertificateReference.h>
#include <Modloader/app/structs/GameCertificateReference__Array.h>

namespace app::classes::types {
    namespace GameCertificateReference {
        namespace {
            inline app::GameCertificateReference__Class* type_info_ref = nullptr;
        }
        inline app::GameCertificateReference__Class** type_info = &type_info_ref;
        inline app::GameCertificateReference__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReference__Class>(type_info, "PlayFab.MultiplayerModels", "GameCertificateReference");
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
