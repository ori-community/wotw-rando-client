#pragma once
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs.h>
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerStateChangedEventArgs {
        inline app::XboxControllerStateChangedEventArgs__Class** type_info() {
            static app::XboxControllerStateChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxControllerStateChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04770448));
            }
            return cache;
        }
        inline app::XboxControllerStateChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerStateChangedEventArgs__Class>(type_info(), "J2i.Net.XInputWrapper", "XboxControllerStateChangedEventArgs");
        }
        inline app::XboxControllerStateChangedEventArgs* create() {
            return il2cpp::create_object<app::XboxControllerStateChangedEventArgs>(get_class());
        }
    } // namespace XboxControllerStateChangedEventArgs
} // namespace app::classes::types
