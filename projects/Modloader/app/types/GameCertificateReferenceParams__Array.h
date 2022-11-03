#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameCertificateReferenceParams__Array {
        namespace {
            inline app::GameCertificateReferenceParams__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameCertificateReferenceParams__Array__Class** type_info = &type_info_ref;
        inline app::GameCertificateReferenceParams__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReferenceParams__Array__Class>(type_info, "PlayFab.MultiplayerModels", "GameCertificateReferenceParams[]");
        }
        inline app::GameCertificateReferenceParams__Array* create() {
            return il2cpp::create_object<app::GameCertificateReferenceParams__Array>(get_class());
        }
    } // namespace GameCertificateReferenceParams__Array
} // namespace app::classes::types
