#pragma once
#include <Modloader/app/structs/Math2d.h>
#include <Modloader/app/structs/Math2d__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Math2d {
        inline app::Math2d__Class** type_info() {
            static app::Math2d__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Math2d__Class**)(modloader::win::memory::resolve_rva(0x0477A3C8));
            }
            return cache;
        }
        inline app::Math2d__Class* get_class() {
            return il2cpp::get_class<app::Math2d__Class>(type_info(), "Swing", "Math2d");
        }
        inline app::Math2d* create() {
            return il2cpp::create_object<app::Math2d>(get_class());
        }
    } // namespace Math2d
} // namespace app::classes::types
