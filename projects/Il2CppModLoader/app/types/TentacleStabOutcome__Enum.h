#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleStabOutcome__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleStabOutcome__Enum__Class** type_info;
        inline app::TentacleStabOutcome__Enum__Class* get_class() {
            return il2cpp::get_class<app::TentacleStabOutcome__Enum__Class>(type_info, "", "TentacleStabOutcome");
        }
        inline app::TentacleStabOutcome__Enum* create() {
            return il2cpp::create_object<app::TentacleStabOutcome__Enum>(get_class());
        }
    } // namespace TentacleStabOutcome__Enum
} // namespace app::classes::types
