#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Array.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_PrefabInfo__Array {
        inline app::UberPoolPerfTest_PrefabInfo__Array__Class** type_info() {
            static app::UberPoolPerfTest_PrefabInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_PrefabInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTest_PrefabInfo__Array__Class>(type_info(), "", "UberPoolPerfTest+PrefabInfo[]");
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_PrefabInfo__Array>(get_class());
        }
    } // namespace UberPoolPerfTest_PrefabInfo__Array
} // namespace app::classes::types
