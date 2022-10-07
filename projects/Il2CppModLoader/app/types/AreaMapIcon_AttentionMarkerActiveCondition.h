#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIcon_AttentionMarkerActiveCondition {
        namespace {
            app::AreaMapIcon_AttentionMarkerActiveCondition__Class* type_info_ref = nullptr;
        }
        app::AreaMapIcon_AttentionMarkerActiveCondition__Class** type_info = &type_info_ref;
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::AreaMapIcon_AttentionMarkerActiveCondition__Class>(type_info, "", "AreaMapIcon", "AttentionMarkerActiveCondition");
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition* create() {
            return il2cpp::create_object<app::AreaMapIcon_AttentionMarkerActiveCondition>(get_class());
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Boxed* box(app::AreaMapIcon_AttentionMarkerActiveCondition value) {
            return il2cpp::box_value<app::AreaMapIcon_AttentionMarkerActiveCondition__Boxed>(get_class(), value);
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapIcon_AttentionMarkerActiveCondition__Array>(get_class(), size);
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array* create_array(const std::vector<app::AreaMapIcon_AttentionMarkerActiveCondition>& items) {
            return il2cpp::array_new<app::AreaMapIcon_AttentionMarkerActiveCondition__Array>(get_class(), items);
        }
    } // namespace AreaMapIcon_AttentionMarkerActiveCondition
} // namespace app::classes::types
