#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition__Array__Class.h>
#include <Modloader/app/structs/AreaMapIcon_AttentionMarkerActiveCondition__Array.h>

namespace app::classes::types {
    namespace AreaMapIcon_AttentionMarkerActiveCondition__Array {
        namespace {
            inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon_AttentionMarkerActiveCondition__Array__Class>(type_info, "", "AreaMapIcon+AttentionMarkerActiveCondition[]");
        }
        inline app::AreaMapIcon_AttentionMarkerActiveCondition__Array* create() {
            return il2cpp::create_object<app::AreaMapIcon_AttentionMarkerActiveCondition__Array>(get_class());
        }
    } // namespace AreaMapIcon_AttentionMarkerActiveCondition__Array
} // namespace app::classes::types
