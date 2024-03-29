#pragma once
#include <Modloader/app/structs/IMoonPlayable.h>
#include <Modloader/app/structs/IMoonPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonPlayable {
        inline app::IMoonPlayable__Class** type_info() {
            static app::IMoonPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonPlayable__Class**)(modloader::win::memory::resolve_rva(0x047661B8));
            }
            return cache;
        }
        inline app::IMoonPlayable__Class* get_class() {
            return il2cpp::get_class<app::IMoonPlayable__Class>(type_info(), "Moon.Timeline", "IMoonPlayable");
        }
    } // namespace IMoonPlayable
} // namespace app::classes::types
