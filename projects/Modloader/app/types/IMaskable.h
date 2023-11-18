#pragma once
#include <Modloader/app/structs/IMaskable.h>
#include <Modloader/app/structs/IMaskable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMaskable {
        inline app::IMaskable__Class** type_info() {
            static app::IMaskable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMaskable__Class**)(modloader::win::memory::resolve_rva(0x047730C0));
            }
            return cache;
        }
        inline app::IMaskable__Class* get_class() {
            return il2cpp::get_class<app::IMaskable__Class>(type_info(), "UnityEngine.UI", "IMaskable");
        }
    } // namespace IMaskable
} // namespace app::classes::types
