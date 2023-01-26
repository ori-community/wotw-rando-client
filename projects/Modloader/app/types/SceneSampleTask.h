#pragma once
#include <Modloader/app/structs/SceneSampleTask.h>
#include <Modloader/app/structs/SceneSampleTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSampleTask {
        inline app::SceneSampleTask__Class** type_info() {
            static app::SceneSampleTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0470B648));
            }
            return cache;
        }
        inline app::SceneSampleTask__Class* get_class() {
            return il2cpp::get_class<app::SceneSampleTask__Class>(type_info(), "Moon.ArtOptimization", "SceneSampleTask");
        }
        inline app::SceneSampleTask* create() {
            return il2cpp::create_object<app::SceneSampleTask>(get_class());
        }
    } // namespace SceneSampleTask
} // namespace app::classes::types
