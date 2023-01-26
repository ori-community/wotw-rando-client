#pragma once
#include <Modloader/app/structs/CaptureData.h>
#include <Modloader/app/structs/CaptureData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaptureData {
        inline app::CaptureData__Class** type_info() {
            static app::CaptureData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaptureData__Class**)(modloader::win::memory::resolve_rva(0x0472C7A0));
            }
            return cache;
        }
        inline app::CaptureData__Class* get_class() {
            return il2cpp::get_class<app::CaptureData__Class>(type_info(), "Moon.Timeline", "CaptureData");
        }
        inline app::CaptureData* create() {
            return il2cpp::create_object<app::CaptureData>(get_class());
        }
    } // namespace CaptureData
} // namespace app::classes::types
