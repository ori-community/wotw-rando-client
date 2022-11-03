#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Certificate {
        namespace {
            inline app::Certificate__Class* type_info_ref = nullptr;
        }
        inline app::Certificate__Class** type_info = &type_info_ref;
        inline app::Certificate__Class* get_class() {
            return il2cpp::get_class<app::Certificate__Class>(type_info, "PlayFab.MultiplayerModels", "Certificate");
        }
        inline app::Certificate* create() {
            return il2cpp::create_object<app::Certificate>(get_class());
        }
    } // namespace Certificate
} // namespace app::classes::types
