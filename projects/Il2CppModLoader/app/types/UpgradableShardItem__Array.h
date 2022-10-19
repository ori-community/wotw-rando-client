#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpgradableShardItem__Array {
        namespace {
            inline app::UpgradableShardItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableShardItem__Array__Class** type_info = &type_info_ref;
        inline app::UpgradableShardItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableShardItem__Array__Class>(type_info, "", "UpgradableShardItem[]");
        }
        inline app::UpgradableShardItem__Array* create() {
            return il2cpp::create_object<app::UpgradableShardItem__Array>(get_class());
        }
    } // namespace UpgradableShardItem__Array
} // namespace app::classes::types
