#pragma once
#include <Modloader/app/structs/SeinCinematic_c_DisplayClass45_0.h>
#include <Modloader/app/structs/SeinCinematic_c_DisplayClass45_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCinematic_c_DisplayClass45_0 {
        inline app::SeinCinematic_c_DisplayClass45_0__Class** type_info() {
            static app::SeinCinematic_c_DisplayClass45_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinCinematic_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x047243F0));
            }
            return cache;
        }
        inline app::SeinCinematic_c_DisplayClass45_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCinematic_c_DisplayClass45_0__Class>(type_info(), "", "SeinCinematic", "<>c__DisplayClass45_0");
        }
        inline app::SeinCinematic_c_DisplayClass45_0* create() {
            return il2cpp::create_object<app::SeinCinematic_c_DisplayClass45_0>(get_class());
        }
    } // namespace SeinCinematic_c_DisplayClass45_0
} // namespace app::classes::types
