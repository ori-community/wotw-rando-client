#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnType__Enum {
        namespace {
            app::MinerSpawnType__Enum__Class* type_info_ref = nullptr;
        }
        app::MinerSpawnType__Enum__Class** type_info = &type_info_ref;
        inline app::MinerSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnType__Enum__Class>(type_info, "", "MinerSpawnType");
        }
        inline app::MinerSpawnType__Enum* create() {
            return il2cpp::create_object<app::MinerSpawnType__Enum>(get_class());
        }
    } // namespace MinerSpawnType__Enum
} // namespace app::classes::types
