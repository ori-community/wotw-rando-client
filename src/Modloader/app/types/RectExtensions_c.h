#pragma once
#include <Modloader/app/structs/RectExtensions_c.h>
#include <Modloader/app/structs/RectExtensions_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectExtensions_c {
        inline app::RectExtensions_c__Class** type_info() {
            static app::RectExtensions_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x04778F80));
            }
            return cache;
        }
        inline app::RectExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RectExtensions_c__Class>(type_info(), "Sini.Unity", "RectExtensions", "<>c");
        }
        inline app::RectExtensions_c* create() {
            return il2cpp::create_object<app::RectExtensions_c>(get_class());
        }
    } // namespace RectExtensions_c
} // namespace app::classes::types
