#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Polygon_c__Class.h>
#include <Modloader/app/structs/Polygon_c.h>

namespace app::classes::types {
    namespace Polygon_c {
        inline app::Polygon_c__Class** type_info = (app::Polygon_c__Class**)(modloader::win::memory::resolve_rva(0x04716480));
        inline app::Polygon_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Polygon_c__Class>(type_info, "", "Polygon", "<>c");
        }
        inline app::Polygon_c* create() {
            return il2cpp::create_object<app::Polygon_c>(get_class());
        }
    } // namespace Polygon_c
} // namespace app::classes::types
