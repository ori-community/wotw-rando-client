#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugHub_DebugHubLayout__Class.h>
#include <Modloader/app/structs/DebugHub_DebugHubLayout.h>
#include <Modloader/app/structs/DebugHub_DebugHubLayout__Boxed.h>

namespace app::classes::types {
    namespace DebugHub_DebugHubLayout {
        namespace {
            inline app::DebugHub_DebugHubLayout__Class* type_info_ref = nullptr;
        }
        inline app::DebugHub_DebugHubLayout__Class** type_info = &type_info_ref;
        inline app::DebugHub_DebugHubLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHub_DebugHubLayout__Class>(type_info, "", "DebugHub", "DebugHubLayout");
        }
        inline app::DebugHub_DebugHubLayout* create() {
            return il2cpp::create_object<app::DebugHub_DebugHubLayout>(get_class());
        }
        inline app::DebugHub_DebugHubLayout__Boxed* box(app::DebugHub_DebugHubLayout value) {
            return il2cpp::box_value<app::DebugHub_DebugHubLayout__Boxed>(get_class(), value);
        }
    } // namespace DebugHub_DebugHubLayout
} // namespace app::classes::types
