#pragma once
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition__Array.h>
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIcon_AttentionMarkerActiveCondition__Array {
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class** type_info() {
            static app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class>(type_info(), "", "AreaMapIcon+AttentionMarkerActiveCondition[]");
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array* create() {
            return il2cpp::create_object<app::AreaMapIcon_AttentionMarkerActiveCondition__Array>(get_class());
        }
    } // namespace AreaMapIcon_AttentionMarkerActiveCondition__Array
} // namespace app::classes::types
