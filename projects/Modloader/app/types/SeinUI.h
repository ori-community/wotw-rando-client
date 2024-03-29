#pragma once
#include <Modloader/app/structs/SeinUI.h>
#include <Modloader/app/structs/SeinUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinUI {
        inline app::SeinUI__Class** type_info() {
            static app::SeinUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinUI__Class**)(modloader::win::memory::resolve_rva(0x04702748));
            }
            return cache;
        }
        inline app::SeinUI__Class* get_class() {
            return il2cpp::get_class<app::SeinUI__Class>(type_info(), "", "SeinUI");
        }
        inline app::SeinUI* create() {
            return il2cpp::create_object<app::SeinUI>(get_class());
        }
    } // namespace SeinUI
} // namespace app::classes::types
