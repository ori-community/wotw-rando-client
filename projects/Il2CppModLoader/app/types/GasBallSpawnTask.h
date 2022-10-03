#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasBallSpawnTask {
        namespace {
            app::GasBallSpawnTask__Class* type_info_ref = nullptr;
        }
        app::GasBallSpawnTask__Class** type_info = &type_info_ref;
        inline app::GasBallSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::GasBallSpawnTask__Class>(type_info, "", "GasBallSpawnTask");
        }
        inline app::GasBallSpawnTask* create() {
            return il2cpp::create_object<app::GasBallSpawnTask>(get_class());
        }
    } // namespace GasBallSpawnTask
} // namespace app::classes::types
