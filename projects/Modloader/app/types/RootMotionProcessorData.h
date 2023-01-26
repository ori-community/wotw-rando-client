#pragma once
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/RootMotionProcessorData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RootMotionProcessorData {
        inline app::RootMotionProcessorData__Class** type_info() {
            static app::RootMotionProcessorData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RootMotionProcessorData__Class**)(modloader::win::memory::resolve_rva(0x04734228));
            }
            return cache;
        }
        inline app::RootMotionProcessorData__Class* get_class() {
            return il2cpp::get_class<app::RootMotionProcessorData__Class>(type_info(), "", "RootMotionProcessorData");
        }
        inline app::RootMotionProcessorData* create() {
            return il2cpp::create_object<app::RootMotionProcessorData>(get_class());
        }
    } // namespace RootMotionProcessorData
} // namespace app::classes::types
