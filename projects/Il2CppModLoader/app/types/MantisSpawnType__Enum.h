#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisSpawnType__Enum {
        namespace {
            app::MantisSpawnType__Enum__Class* type_info_ref = nullptr;
        }
        app::MantisSpawnType__Enum__Class** type_info = &type_info_ref;
        inline app::MantisSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MantisSpawnType__Enum__Class>(type_info, "", "MantisSpawnType");
        }
        inline app::MantisSpawnType__Enum* create() {
            return il2cpp::create_object<app::MantisSpawnType__Enum>(get_class());
        }
    } // namespace MantisSpawnType__Enum
} // namespace app::classes::types
