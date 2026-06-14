#pragma once
#include <Modloader/app/structs/MoonTelemetryShrineStartEvent_ShrineID__Enum.h>
#include <Modloader/app/structs/MoonTelemetryShrineStartEvent_ShrineID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineStartEvent_ShrineID__Enum {
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class** type_info() {
            static app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class**)(modloader::win::memory::resolve_rva(0x047111B8));
            }
            return cache;
        }
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class>(type_info(), "", "MoonTelemetryShrineStartEvent", "ShrineID");
        }
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineStartEvent_ShrineID__Enum>(get_class());
        }
    } // namespace MoonTelemetryShrineStartEvent_ShrineID__Enum
} // namespace app::classes::types
