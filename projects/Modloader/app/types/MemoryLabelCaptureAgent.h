#pragma once
#include <Modloader/app/structs/MemoryLabelCaptureAgent.h>
#include <Modloader/app/structs/MemoryLabelCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelCaptureAgent {
        inline app::MemoryLabelCaptureAgent__Class** type_info() {
            static app::MemoryLabelCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryLabelCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryLabelCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelCaptureAgent__Class>(type_info(), "", "MemoryLabelCaptureAgent");
        }
        inline app::MemoryLabelCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryLabelCaptureAgent>(get_class());
        }
    } // namespace MemoryLabelCaptureAgent
} // namespace app::classes::types
