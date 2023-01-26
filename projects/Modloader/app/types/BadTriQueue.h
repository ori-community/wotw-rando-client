#pragma once
#include <Modloader/app/structs/BadTriQueue.h>
#include <Modloader/app/structs/BadTriQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BadTriQueue {
        inline app::BadTriQueue__Class** type_info() {
            static app::BadTriQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BadTriQueue__Class**)(modloader::win::memory::resolve_rva(0x04755B88));
            }
            return cache;
        }
        inline app::BadTriQueue__Class* get_class() {
            return il2cpp::get_class<app::BadTriQueue__Class>(type_info(), "TriangleNet.Meshing.Data", "BadTriQueue");
        }
        inline app::BadTriQueue* create() {
            return il2cpp::create_object<app::BadTriQueue>(get_class());
        }
    } // namespace BadTriQueue
} // namespace app::classes::types
