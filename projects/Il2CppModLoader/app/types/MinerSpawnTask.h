#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnTask {
        namespace {
            app::MinerSpawnTask__Class* type_info_ref = nullptr;
        }
        app::MinerSpawnTask__Class** type_info = &type_info_ref;
        inline app::MinerSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnTask__Class>(type_info, "", "MinerSpawnTask");
        }
        inline app::MinerSpawnTask* create() {
            return il2cpp::create_object<app::MinerSpawnTask>(get_class());
        }
    } // namespace MinerSpawnTask
} // namespace app::classes::types
