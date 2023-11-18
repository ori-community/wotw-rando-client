#pragma once
#include <Modloader/app/structs/RebindAllUberShadersTask.h>
#include <Modloader/app/structs/RebindAllUberShadersTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RebindAllUberShadersTask {
        inline app::RebindAllUberShadersTask__Class** type_info() {
            static app::RebindAllUberShadersTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RebindAllUberShadersTask__Class**)(modloader::win::memory::resolve_rva(0x04748E90));
            }
            return cache;
        }
        inline app::RebindAllUberShadersTask__Class* get_class() {
            return il2cpp::get_class<app::RebindAllUberShadersTask__Class>(type_info(), "Moon.ArtOptimization", "RebindAllUberShadersTask");
        }
        inline app::RebindAllUberShadersTask* create() {
            return il2cpp::create_object<app::RebindAllUberShadersTask>(get_class());
        }
    } // namespace RebindAllUberShadersTask
} // namespace app::classes::types
