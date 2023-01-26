#pragma once
#include <Modloader/app/structs/GasBallSpawnTask.h>
#include <Modloader/app/structs/GasBallSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasBallSpawnTask {
        inline app::GasBallSpawnTask__Class** type_info() {
            static app::GasBallSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasBallSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasBallSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::GasBallSpawnTask__Class>(type_info(), "", "GasBallSpawnTask");
        }
        inline app::GasBallSpawnTask* create() {
            return il2cpp::create_object<app::GasBallSpawnTask>(get_class());
        }
    } // namespace GasBallSpawnTask
} // namespace app::classes::types
