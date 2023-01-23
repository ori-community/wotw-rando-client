#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ElapsedEventHandler__Class.h>
#include <Modloader/app/structs/ElapsedEventHandler.h>

namespace app::classes::types {
    namespace ElapsedEventHandler {
        inline app::ElapsedEventHandler__Class** type_info = (app::ElapsedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04799A30));
        inline app::ElapsedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ElapsedEventHandler__Class>(type_info, "System.Timers", "ElapsedEventHandler");
        }
        inline app::ElapsedEventHandler* create() {
            return il2cpp::create_object<app::ElapsedEventHandler>(get_class());
        }
    } // namespace ElapsedEventHandler
} // namespace app::classes::types
