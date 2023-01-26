#pragma once
#include <Modloader/app/structs/WipeReplay.h>
#include <Modloader/app/structs/WipeReplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WipeReplay {
        inline app::WipeReplay__Class** type_info() {
            static app::WipeReplay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WipeReplay__Class**)(modloader::win::memory::resolve_rva(0x0474A148));
            }
            return cache;
        }
        inline app::WipeReplay__Class* get_class() {
            return il2cpp::get_class<app::WipeReplay__Class>(type_info(), "", "WipeReplay");
        }
        inline app::WipeReplay* create() {
            return il2cpp::create_object<app::WipeReplay>(get_class());
        }
    } // namespace WipeReplay
} // namespace app::classes::types
