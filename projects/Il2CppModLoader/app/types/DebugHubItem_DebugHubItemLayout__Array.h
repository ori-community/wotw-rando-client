#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugHubItem_DebugHubItemLayout__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugHubItem_DebugHubItemLayout__Array__Class** type_info;
        inline app::DebugHubItem_DebugHubItemLayout__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugHubItem_DebugHubItemLayout__Array__Class>(type_info, "", "DebugHubItem+DebugHubItemLayout[]");
        }
        inline app::DebugHubItem_DebugHubItemLayout__Array* create() {
            return il2cpp::create_object<app::DebugHubItem_DebugHubItemLayout__Array>(get_class());
        }
    } // namespace DebugHubItem_DebugHubItemLayout__Array
} // namespace app::classes::types
