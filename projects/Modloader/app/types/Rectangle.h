#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Rectangle__Class.h>
#include <Modloader/app/structs/Rectangle.h>

namespace app::classes::types {
    namespace Rectangle {
        inline app::Rectangle__Class** type_info = (app::Rectangle__Class**)(modloader::win::memory::resolve_rva(0x0477A0C8));
        inline app::Rectangle__Class* get_class() {
            return il2cpp::get_class<app::Rectangle__Class>(type_info, "TriangleNet.Geometry", "Rectangle");
        }
        inline app::Rectangle* create() {
            return il2cpp::create_object<app::Rectangle>(get_class());
        }
    } // namespace Rectangle
} // namespace app::classes::types
