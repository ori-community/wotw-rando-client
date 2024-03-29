#pragma once
#include <Modloader/app/structs/AlphabetOptions_c_DisplayClass11_0.h>
#include <Modloader/app/structs/AlphabetOptions_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphabetOptions_c_DisplayClass11_0 {
        inline app::AlphabetOptions_c_DisplayClass11_0__Class** type_info() {
            static app::AlphabetOptions_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AlphabetOptions_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0475CA70));
            }
            return cache;
        }
        inline app::AlphabetOptions_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AlphabetOptions_c_DisplayClass11_0__Class>(type_info(), "", "AlphabetOptions", "<>c__DisplayClass11_0");
        }
        inline app::AlphabetOptions_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::AlphabetOptions_c_DisplayClass11_0>(get_class());
        }
    } // namespace AlphabetOptions_c_DisplayClass11_0
} // namespace app::classes::types
