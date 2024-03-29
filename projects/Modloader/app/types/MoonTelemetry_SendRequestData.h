#pragma once
#include <Modloader/app/structs/MoonTelemetry_SendRequestData.h>
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Array.h>
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_SendRequestData {
        inline app::MoonTelemetry_SendRequestData__Class** type_info() {
            static app::MoonTelemetry_SendRequestData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetry_SendRequestData__Class**)(modloader::win::memory::resolve_rva(0x0476C478));
            }
            return cache;
        }
        inline app::MoonTelemetry_SendRequestData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_SendRequestData__Class>(type_info(), "", "MoonTelemetry", "SendRequestData");
        }
        inline app::MoonTelemetry_SendRequestData* create() {
            return il2cpp::create_object<app::MoonTelemetry_SendRequestData>(get_class());
        }
        inline app::MoonTelemetry_SendRequestData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetry_SendRequestData__Array>(get_class(), size);
        }
        inline app::MoonTelemetry_SendRequestData__Array* create_array(const std::vector<app::MoonTelemetry_SendRequestData*>& items) {
            return il2cpp::array_new<app::MoonTelemetry_SendRequestData__Array>(get_class(), items);
        }
    } // namespace MoonTelemetry_SendRequestData
} // namespace app::classes::types
