#pragma once
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachPrefabsToLiannaTongue {
        inline app::AttachPrefabsToLiannaTongue__Class** type_info() {
            static app::AttachPrefabsToLiannaTongue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachPrefabsToLiannaTongue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachPrefabsToLiannaTongue__Class* get_class() {
            return il2cpp::get_class<app::AttachPrefabsToLiannaTongue__Class>(type_info(), "", "AttachPrefabsToLiannaTongue");
        }
        inline app::AttachPrefabsToLiannaTongue* create() {
            return il2cpp::create_object<app::AttachPrefabsToLiannaTongue>(get_class());
        }
    } // namespace AttachPrefabsToLiannaTongue
} // namespace app::classes::types
