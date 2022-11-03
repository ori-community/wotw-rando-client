#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineStartEvent_ShrineID__Enum {
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class** type_info = (app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class**)(modloader::win::memory::resolve_rva(0x047111B8));
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class>(type_info, "", "MoonTelemetryShrineStartEvent", "ShrineID");
        }
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineStartEvent_ShrineID__Enum>(get_class());
        }
    } // namespace MoonTelemetryShrineStartEvent_ShrineID__Enum
} // namespace app::classes::types
