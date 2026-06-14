#pragma once
#include <Modloader/app/structs/MemoryCaptureAgent.h>
#include <Modloader/app/structs/MemoryCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryCaptureAgent {
        inline app::MemoryCaptureAgent__Class** type_info() {
            static app::MemoryCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04724B40));
            }
            return cache;
        }
        inline app::MemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryCaptureAgent__Class>(type_info(), "", "MemoryCaptureAgent");
        }
        inline app::MemoryCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryCaptureAgent>(get_class());
        }
    } // namespace MemoryCaptureAgent
} // namespace app::classes::types
