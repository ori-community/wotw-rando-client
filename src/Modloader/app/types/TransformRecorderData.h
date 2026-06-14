#pragma once
#include <Modloader/app/structs/TransformRecorderData.h>
#include <Modloader/app/structs/TransformRecorderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformRecorderData {
        inline app::TransformRecorderData__Class** type_info() {
            static app::TransformRecorderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047793B0));
            }
            return cache;
        }
        inline app::TransformRecorderData__Class* get_class() {
            return il2cpp::get_class<app::TransformRecorderData__Class>(type_info(), "", "TransformRecorderData");
        }
        inline app::TransformRecorderData* create() {
            return il2cpp::create_object<app::TransformRecorderData>(get_class());
        }
    } // namespace TransformRecorderData
} // namespace app::classes::types
