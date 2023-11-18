#pragma once
#include <Modloader/app/structs/RectExtensions_c_DisplayClass75_0.h>
#include <Modloader/app/structs/RectExtensions_c_DisplayClass75_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectExtensions_c_DisplayClass75_0 {
        inline app::RectExtensions_c_DisplayClass75_0__Class** type_info() {
            static app::RectExtensions_c_DisplayClass75_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectExtensions_c_DisplayClass75_0__Class**)(modloader::win::memory::resolve_rva(0x04745998));
            }
            return cache;
        }
        inline app::RectExtensions_c_DisplayClass75_0__Class* get_class() {
            return il2cpp::get_nested_class<app::RectExtensions_c_DisplayClass75_0__Class>(type_info(), "Sini.Unity", "RectExtensions", "<>c__DisplayClass75_0");
        }
        inline app::RectExtensions_c_DisplayClass75_0* create() {
            return il2cpp::create_object<app::RectExtensions_c_DisplayClass75_0>(get_class());
        }
    } // namespace RectExtensions_c_DisplayClass75_0
} // namespace app::classes::types
