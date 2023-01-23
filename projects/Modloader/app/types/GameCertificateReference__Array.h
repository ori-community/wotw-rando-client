#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameCertificateReference__Array__Class.h>
#include <Modloader/app/structs/GameCertificateReference__Array.h>

namespace app::classes::types {
    namespace GameCertificateReference__Array {
        namespace {
            inline app::GameCertificateReference__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameCertificateReference__Array__Class** type_info = &type_info_ref;
        inline app::GameCertificateReference__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCertificateReference__Array__Class>(type_info, "PlayFab.MultiplayerModels", "GameCertificateReference[]");
        }
        inline app::GameCertificateReference__Array* create() {
            return il2cpp::create_object<app::GameCertificateReference__Array>(get_class());
        }
    } // namespace GameCertificateReference__Array
} // namespace app::classes::types
