#pragma once
#include <Modloader/app/structs/NvnMemoryCaptureAgent.h>
#include <Modloader/app/structs/NvnMemoryCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryCaptureAgent {
        inline app::NvnMemoryCaptureAgent__Class** type_info() {
            static app::NvnMemoryCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NvnMemoryCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NvnMemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryCaptureAgent__Class>(type_info(), "", "NvnMemoryCaptureAgent");
        }
        inline app::NvnMemoryCaptureAgent* create() {
            return il2cpp::create_object<app::NvnMemoryCaptureAgent>(get_class());
        }
    } // namespace NvnMemoryCaptureAgent
} // namespace app::classes::types
