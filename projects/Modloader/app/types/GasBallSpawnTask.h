#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasBallSpawnTask__Class.h>
#include <Modloader/app/structs/GasBallSpawnTask.h>

namespace app::classes::types {
    namespace GasBallSpawnTask {
        namespace {
            inline app::GasBallSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::GasBallSpawnTask__Class** type_info = &type_info_ref;
        inline app::GasBallSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::GasBallSpawnTask__Class>(type_info, "", "GasBallSpawnTask");
        }
        inline app::GasBallSpawnTask* create() {
            return il2cpp::create_object<app::GasBallSpawnTask>(get_class());
        }
    } // namespace GasBallSpawnTask
} // namespace app::classes::types
