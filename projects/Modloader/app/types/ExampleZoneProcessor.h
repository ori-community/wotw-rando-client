#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExampleZoneProcessor__Class.h>
#include <Modloader/app/structs/ExampleZoneProcessor.h>

namespace app::classes::types {
    namespace ExampleZoneProcessor {
        inline app::ExampleZoneProcessor__Class** type_info = (app::ExampleZoneProcessor__Class**)(modloader::win::memory::resolve_rva(0x04753DA8));
        inline app::ExampleZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::ExampleZoneProcessor__Class>(type_info, "Moon.Wwise", "ExampleZoneProcessor");
        }
        inline app::ExampleZoneProcessor* create() {
            return il2cpp::create_object<app::ExampleZoneProcessor>(get_class());
        }
    } // namespace ExampleZoneProcessor
} // namespace app::classes::types
