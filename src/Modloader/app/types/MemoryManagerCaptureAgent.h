#pragma once
#include <Modloader/app/structs/MemoryManagerCaptureAgent.h>
#include <Modloader/app/structs/MemoryManagerCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerCaptureAgent {
        inline app::MemoryManagerCaptureAgent__Class** type_info() {
            static app::MemoryManagerCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryManagerCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04796500));
            }
            return cache;
        }
        inline app::MemoryManagerCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerCaptureAgent__Class>(type_info(), "", "MemoryManagerCaptureAgent");
        }
        inline app::MemoryManagerCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryManagerCaptureAgent>(get_class());
        }
    } // namespace MemoryManagerCaptureAgent
} // namespace app::classes::types
