#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachPrefabsToLiannaTongue {
        namespace {
            app::AttachPrefabsToLiannaTongue__Class* type_info_ref = nullptr;
        }
        app::AttachPrefabsToLiannaTongue__Class** type_info = &type_info_ref;
        inline app::AttachPrefabsToLiannaTongue__Class* get_class() {
            return il2cpp::get_class<app::AttachPrefabsToLiannaTongue__Class>(type_info, "", "AttachPrefabsToLiannaTongue");
        }
        inline app::AttachPrefabsToLiannaTongue* create() {
            return il2cpp::create_object<app::AttachPrefabsToLiannaTongue>(get_class());
        }
    } // namespace AttachPrefabsToLiannaTongue
} // namespace app::classes::types
