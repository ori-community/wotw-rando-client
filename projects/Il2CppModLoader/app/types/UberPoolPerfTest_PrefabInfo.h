#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_PrefabInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolPerfTest_PrefabInfo__Class** type_info;
        inline app::UberPoolPerfTest_PrefabInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_PrefabInfo__Class>(type_info, "", "UberPoolPerfTest", "PrefabInfo");
        }
        inline app::UberPoolPerfTest_PrefabInfo* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_PrefabInfo>(get_class());
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPerfTest_PrefabInfo__Array>(get_class(), size);
        }
    } // namespace UberPoolPerfTest_PrefabInfo
} // namespace app::classes::types
