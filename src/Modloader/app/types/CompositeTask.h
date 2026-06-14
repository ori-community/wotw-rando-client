#pragma once
#include <Modloader/app/structs/CompositeTask.h>
#include <Modloader/app/structs/CompositeTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompositeTask {
        inline app::CompositeTask__Class** type_info() {
            static app::CompositeTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompositeTask__Class**)(modloader::win::memory::resolve_rva(0x0471B9F0));
            }
            return cache;
        }
        inline app::CompositeTask__Class* get_class() {
            return il2cpp::get_class<app::CompositeTask__Class>(type_info(), "Moon.ArtOptimization", "CompositeTask");
        }
        inline app::CompositeTask* create() {
            return il2cpp::create_object<app::CompositeTask>(get_class());
        }
    } // namespace CompositeTask
} // namespace app::classes::types
