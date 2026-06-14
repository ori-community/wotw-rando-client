#pragma once
#include <Modloader/app/structs/DebugHub_DebugHubLayout.h>
#include <Modloader/app/structs/DebugHub_DebugHubLayout__Boxed.h>
#include <Modloader/app/structs/DebugHub_DebugHubLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugHub_DebugHubLayout {
        inline app::DebugHub_DebugHubLayout__Class** type_info() {
            static app::DebugHub_DebugHubLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugHub_DebugHubLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugHub_DebugHubLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHub_DebugHubLayout__Class>(type_info(), "", "DebugHub", "DebugHubLayout");
        }
        inline app::DebugHub_DebugHubLayout* create() {
            return il2cpp::create_object<app::DebugHub_DebugHubLayout>(get_class());
        }
        inline app::DebugHub_DebugHubLayout__Boxed* box(app::DebugHub_DebugHubLayout value) {
            return il2cpp::box_value<app::DebugHub_DebugHubLayout__Boxed>(get_class(), value);
        }
    } // namespace DebugHub_DebugHubLayout
} // namespace app::classes::types
