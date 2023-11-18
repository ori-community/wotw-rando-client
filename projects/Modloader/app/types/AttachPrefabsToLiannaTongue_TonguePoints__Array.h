#pragma once
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Array.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachPrefabsToLiannaTongue_TonguePoints__Array {
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Array__Class** type_info() {
            static app::AttachPrefabsToLiannaTongue_TonguePoints__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachPrefabsToLiannaTongue_TonguePoints__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Array__Class* get_class() {
            return il2cpp::get_class<app::AttachPrefabsToLiannaTongue_TonguePoints__Array__Class>(type_info(), "", "AttachPrefabsToLiannaTongue+TonguePoints[]");
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Array* create() {
            return il2cpp::create_object<app::AttachPrefabsToLiannaTongue_TonguePoints__Array>(get_class());
        }
    } // namespace AttachPrefabsToLiannaTongue_TonguePoints__Array
} // namespace app::classes::types
