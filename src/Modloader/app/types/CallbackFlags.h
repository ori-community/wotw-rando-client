#pragma once
#include <Modloader/app/structs/CallbackFlags.h>
#include <Modloader/app/structs/CallbackFlags__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallbackFlags {
        inline app::CallbackFlags__Class** type_info() {
            static app::CallbackFlags__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallbackFlags__Class**)(modloader::win::memory::resolve_rva(0x04758268));
            }
            return cache;
        }
        inline app::CallbackFlags__Class* get_class() {
            return il2cpp::get_class<app::CallbackFlags__Class>(type_info(), "AK.Wwise", "CallbackFlags");
        }
        inline app::CallbackFlags* create() {
            return il2cpp::create_object<app::CallbackFlags>(get_class());
        }
    } // namespace CallbackFlags
} // namespace app::classes::types
