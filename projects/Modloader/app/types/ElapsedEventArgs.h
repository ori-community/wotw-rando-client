#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElapsedEventArgs {
        inline app::ElapsedEventArgs__Class** type_info = (app::ElapsedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04759400));
        inline app::ElapsedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ElapsedEventArgs__Class>(type_info, "System.Timers", "ElapsedEventArgs");
        }
        inline app::ElapsedEventArgs* create() {
            return il2cpp::create_object<app::ElapsedEventArgs>(get_class());
        }
    } // namespace ElapsedEventArgs
} // namespace app::classes::types
