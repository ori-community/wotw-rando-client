#pragma once
#include <Modloader/app/structs/SeinSoulFlame_c.h>
#include <Modloader/app/structs/SeinSoulFlame_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlame_c {
        inline app::SeinSoulFlame_c__Class** type_info() {
            static app::SeinSoulFlame_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSoulFlame_c__Class**)(modloader::win::memory::resolve_rva(0x04736118));
            }
            return cache;
        }
        inline app::SeinSoulFlame_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSoulFlame_c__Class>(type_info(), "", "SeinSoulFlame", "<>c");
        }
        inline app::SeinSoulFlame_c* create() {
            return il2cpp::create_object<app::SeinSoulFlame_c>(get_class());
        }
    } // namespace SeinSoulFlame_c
} // namespace app::classes::types
