#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoSpawnTask {
        namespace {
            inline app::SkeetoSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoSpawnTask__Class** type_info = &type_info_ref;
        inline app::SkeetoSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::SkeetoSpawnTask__Class>(type_info, "", "SkeetoSpawnTask");
        }
        inline app::SkeetoSpawnTask* create() {
            return il2cpp::create_object<app::SkeetoSpawnTask>(get_class());
        }
    } // namespace SkeetoSpawnTask
} // namespace app::classes::types
