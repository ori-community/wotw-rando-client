#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallbackFlags {
        inline app::CallbackFlags__Class** type_info = (app::CallbackFlags__Class**)(modloader::win::memory::resolve_rva(0x04758268));
        inline app::CallbackFlags__Class* get_class() {
            return il2cpp::get_class<app::CallbackFlags__Class>(type_info, "AK.Wwise", "CallbackFlags");
        }
        inline app::CallbackFlags* create() {
            return il2cpp::create_object<app::CallbackFlags>(get_class());
        }
    } // namespace CallbackFlags
} // namespace app::classes::types
