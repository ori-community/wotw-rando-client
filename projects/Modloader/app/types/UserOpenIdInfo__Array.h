#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserOpenIdInfo__Array {
        namespace {
            inline app::UserOpenIdInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UserOpenIdInfo__Array__Class** type_info = &type_info_ref;
        inline app::UserOpenIdInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UserOpenIdInfo__Array__Class>(type_info, "PlayFab.ClientModels", "UserOpenIdInfo[]");
        }
        inline app::UserOpenIdInfo__Array* create() {
            return il2cpp::create_object<app::UserOpenIdInfo__Array>(get_class());
        }
    } // namespace UserOpenIdInfo__Array
} // namespace app::classes::types
