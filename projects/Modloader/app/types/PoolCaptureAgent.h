#pragma once
#include <Modloader/app/structs/PoolCaptureAgent.h>
#include <Modloader/app/structs/PoolCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolCaptureAgent {
        inline app::PoolCaptureAgent__Class** type_info() {
            static app::PoolCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PoolCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047997F0));
            }
            return cache;
        }
        inline app::PoolCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PoolCaptureAgent__Class>(type_info(), "", "PoolCaptureAgent");
        }
        inline app::PoolCaptureAgent* create() {
            return il2cpp::create_object<app::PoolCaptureAgent>(get_class());
        }
    } // namespace PoolCaptureAgent
} // namespace app::classes::types
