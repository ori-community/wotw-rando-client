#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Array.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_PrefabInfo {
        inline app::UberPoolPerfTest_PrefabInfo__Class** type_info() {
            static app::UberPoolPerfTest_PrefabInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_PrefabInfo__Class**)(modloader::win::memory::resolve_rva(0x04764FD8));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_PrefabInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_PrefabInfo__Class>(type_info(), "", "UberPoolPerfTest", "PrefabInfo");
        }
        inline app::UberPoolPerfTest_PrefabInfo* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_PrefabInfo>(get_class());
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPerfTest_PrefabInfo__Array>(get_class(), size);
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array* create_array(const std::vector<app::UberPoolPerfTest_PrefabInfo*>& items) {
            return il2cpp::array_new<app::UberPoolPerfTest_PrefabInfo__Array>(get_class(), items);
        }
    } // namespace UberPoolPerfTest_PrefabInfo
} // namespace app::classes::types
