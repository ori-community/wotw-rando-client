#pragma once
#include <Modloader/app/structs/PreRecordingData.h>
#include <Modloader/app/structs/PreRecordingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreRecordingData {
        inline app::PreRecordingData__Class** type_info() {
            static app::PreRecordingData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PreRecordingData__Class**)(modloader::win::memory::resolve_rva(0x0474D760));
            }
            return cache;
        }
        inline app::PreRecordingData__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingData__Class>(type_info(), "", "PreRecordingData");
        }
        inline app::PreRecordingData* create() {
            return il2cpp::create_object<app::PreRecordingData>(get_class());
        }
    } // namespace PreRecordingData
} // namespace app::classes::types
