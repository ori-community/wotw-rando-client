#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITriangle {
        inline app::ITriangle__Class** type_info = (app::ITriangle__Class**)(modloader::win::memory::resolve_rva(0x0471BC50));
        inline app::ITriangle__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Class>(type_info, "TriangleNet.Geometry", "ITriangle");
        }
        inline app::ITriangle__Array* create_array(int size) {
            return il2cpp::array_new<app::ITriangle__Array>(get_class(), size);
        }
        inline app::ITriangle__Array* create_array(const std::vector<app::ITriangle*>& items) {
            return il2cpp::array_new<app::ITriangle__Array>(get_class(), items);
        }
    } // namespace ITriangle
} // namespace app::classes::types
