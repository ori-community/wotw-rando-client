#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CommonSpawnTask__Class.h>
#include <Modloader/app/structs/CommonSpawnTask.h>

namespace app::classes::types {
    namespace CommonSpawnTask {
        namespace {
            inline app::CommonSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::CommonSpawnTask__Class** type_info = &type_info_ref;
        inline app::CommonSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::CommonSpawnTask__Class>(type_info, "", "CommonSpawnTask");
        }
        inline app::CommonSpawnTask* create() {
            return il2cpp::create_object<app::CommonSpawnTask>(get_class());
        }
    } // namespace CommonSpawnTask
} // namespace app::classes::types
