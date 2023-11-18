#pragma once
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout.h>
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Array.h>
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Boxed.h>
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugHubItem_DebugHubItemLayout {
        inline app::DebugHubItem_DebugHubItemLayout__Class** type_info() {
            static app::DebugHubItem_DebugHubItemLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugHubItem_DebugHubItemLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugHubItem_DebugHubItemLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHubItem_DebugHubItemLayout__Class>(type_info(), "", "DebugHubItem", "DebugHubItemLayout");
        }
        inline app::DebugHubItem_DebugHubItemLayout* create() {
            return il2cpp::create_object<app::DebugHubItem_DebugHubItemLayout>(get_class());
        }
        inline app::DebugHubItem_DebugHubItemLayout__Boxed* box(app::DebugHubItem_DebugHubItemLayout value) {
            return il2cpp::box_value<app::DebugHubItem_DebugHubItemLayout__Boxed>(get_class(), value);
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugHubItem_DebugHubItemLayout__Array>(get_class(), size);
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array* create_array(const std::vector<app::DebugHubItem_DebugHubItemLayout>& items) {
            return il2cpp::array_new<app::DebugHubItem_DebugHubItemLayout__Array>(get_class(), items);
        }
    } // namespace DebugHubItem_DebugHubItemLayout
} // namespace app::classes::types
