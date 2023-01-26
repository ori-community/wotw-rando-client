#pragma once
#include <Modloader/app/structs/RecorderData.h>
#include <Modloader/app/structs/RecorderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderData {
        inline app::RecorderData__Class** type_info() {
            static app::RecorderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderData__Class**)(modloader::win::memory::resolve_rva(0x047133B0));
            }
            return cache;
        }
        inline app::RecorderData__Class* get_class() {
            return il2cpp::get_class<app::RecorderData__Class>(type_info(), "", "RecorderData");
        }
        inline app::RecorderData* create() {
            return il2cpp::create_object<app::RecorderData>(get_class());
        }
    } // namespace RecorderData
} // namespace app::classes::types
