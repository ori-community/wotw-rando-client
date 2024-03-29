#pragma once
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent_ShrineResult__Enum.h>
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineEndEvent_ShrineResult__Enum {
        inline app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class** type_info() {
            static app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473CBE8));
            }
            return cache;
        }
        inline app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class>(type_info(), "", "MoonTelemetryShrineEndEvent", "ShrineResult");
        }
        inline app::MoonTelemetryShrineEndEvent_ShrineResult__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineEndEvent_ShrineResult__Enum>(get_class());
        }
    } // namespace MoonTelemetryShrineEndEvent_ShrineResult__Enum
} // namespace app::classes::types
