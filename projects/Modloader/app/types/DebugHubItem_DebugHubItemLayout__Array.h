#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugHubItem_DebugHubItemLayout__Array {
        inline app::DebugHubItem_DebugHubItemLayout__Array__Class** type_info = (app::DebugHubItem_DebugHubItemLayout__Array__Class**)(modloader::win::memory::resolve_rva(0x04757298));
        inline app::DebugHubItem_DebugHubItemLayout__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugHubItem_DebugHubItemLayout__Array__Class>(type_info, "", "DebugHubItem+DebugHubItemLayout[]");
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array* create() {
            return il2cpp::create_object<app::DebugHubItem_DebugHubItemLayout__Array>(get_class());
        }
    } // namespace DebugHubItem_DebugHubItemLayout__Array
} // namespace app::classes::types
