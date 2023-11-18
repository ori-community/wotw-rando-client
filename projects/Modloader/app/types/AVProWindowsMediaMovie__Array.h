#pragma once
#include <Modloader/app/structs/AVProWindowsMediaMovie__Array.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie__Array {
        inline app::AVProWindowsMediaMovie__Array__Class** type_info() {
            static app::AVProWindowsMediaMovie__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMediaMovie__Array__Class**)(modloader::win::memory::resolve_rva(0x0470F920));
            }
            return cache;
        }
        inline app::AVProWindowsMediaMovie__Array__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovie__Array__Class>(type_info(), "", "AVProWindowsMediaMovie[]");
        }
        inline app::AVProWindowsMediaMovie__Array* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie__Array>(get_class());
        }
    } // namespace AVProWindowsMediaMovie__Array
} // namespace app::classes::types
