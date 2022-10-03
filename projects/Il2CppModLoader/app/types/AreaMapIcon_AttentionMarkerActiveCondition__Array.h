#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIcon_AttentionMarkerActiveCondition__Array {
        namespace {
            app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* type_info_ref = nullptr;
        }
        app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class>(type_info, "", "AreaMapIcon+AttentionMarkerActiveCondition[]");
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array* create() {
            return il2cpp::create_object<app::AreaMapIcon_AttentionMarkerActiveCondition__Array>(get_class());
        }
    } // namespace AreaMapIcon_AttentionMarkerActiveCondition__Array
} // namespace app::classes::types
