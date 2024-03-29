#pragma once
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Array.h>
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugHubItem_DebugHubItemLayout__Array {
        inline app::DebugHubItem_DebugHubItemLayout__Array__Class** type_info() {
            static app::DebugHubItem_DebugHubItemLayout__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugHubItem_DebugHubItemLayout__Array__Class**)(modloader::win::memory::resolve_rva(0x04757298));
            }
            return cache;
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugHubItem_DebugHubItemLayout__Array__Class>(type_info(), "", "DebugHubItem+DebugHubItemLayout[]");
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array* create() {
            return il2cpp::create_object<app::DebugHubItem_DebugHubItemLayout__Array>(get_class());
        }
    } // namespace DebugHubItem_DebugHubItemLayout__Array
} // namespace app::classes::types
