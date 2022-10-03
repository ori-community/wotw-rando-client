#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameId {
        namespace {
            app::NameId__Class* type_info_ref = nullptr;
        }
        app::NameId__Class** type_info = &type_info_ref;
        inline app::NameId__Class* get_class() {
            return il2cpp::get_class<app::NameId__Class>(type_info, "PlayFab.PlayStreamModels", "NameId");
        }
        inline app::NameId* create() {
            return il2cpp::create_object<app::NameId>(get_class());
        }
    } // namespace NameId
} // namespace app::classes::types
