#pragma once
#include <Modloader/app/structs/EntityDataCaptureAgent.h>
#include <Modloader/app/structs/EntityDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent {
        inline app::EntityDataCaptureAgent__Class** type_info() {
            static app::EntityDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047144E8));
            }
            return cache;
        }
        inline app::EntityDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::EntityDataCaptureAgent__Class>(type_info(), "", "EntityDataCaptureAgent");
        }
        inline app::EntityDataCaptureAgent* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent>(get_class());
        }
    } // namespace EntityDataCaptureAgent
} // namespace app::classes::types
