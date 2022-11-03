#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Math2d {
        inline app::Math2d__Class** type_info = (app::Math2d__Class**)(modloader::win::memory::resolve_rva(0x0477A3C8));
        inline app::Math2d__Class* get_class() {
            return il2cpp::get_class<app::Math2d__Class>(type_info, "Swing", "Math2d");
        }
        inline app::Math2d* create() {
            return il2cpp::create_object<app::Math2d>(get_class());
        }
    } // namespace Math2d
} // namespace app::classes::types
