#pragma once
#include <Modloader/app/structs/ITriangle.h>
#include <Modloader/app/structs/ITriangle__Array.h>
#include <Modloader/app/structs/ITriangle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITriangle {
        inline app::ITriangle__Class** type_info() {
            static app::ITriangle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITriangle__Class**)(modloader::win::memory::resolve_rva(0x0471BC50));
            }
            return cache;
        }
        inline app::ITriangle__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Class>(type_info(), "TriangleNet.Geometry", "ITriangle");
        }
        inline app::ITriangle__Array* create_array(int size) {
            return il2cpp::array_new<app::ITriangle__Array>(get_class(), size);
        }
        inline app::ITriangle__Array* create_array(const std::vector<app::ITriangle*>& items) {
            return il2cpp::array_new<app::ITriangle__Array>(get_class(), items);
        }
    } // namespace ITriangle
} // namespace app::classes::types
