#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerStateChangedEventArgs {
        inline app::XboxControllerStateChangedEventArgs__Class** type_info = (app::XboxControllerStateChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04770448));
        inline app::XboxControllerStateChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerStateChangedEventArgs__Class>(type_info, "J2i.Net.XInputWrapper", "XboxControllerStateChangedEventArgs");
        }
        inline app::XboxControllerStateChangedEventArgs* create() {
            return il2cpp::create_object<app::XboxControllerStateChangedEventArgs>(get_class());
        }
    } // namespace XboxControllerStateChangedEventArgs
} // namespace app::classes::types
