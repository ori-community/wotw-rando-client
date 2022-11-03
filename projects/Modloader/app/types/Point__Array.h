#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Point__Array {
        inline app::Point__Array__Class** type_info = (app::Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04758100));
        inline app::Point__Array__Class* get_class() {
            return il2cpp::get_class<app::Point__Array__Class>(type_info, "TriangleNet.Geometry", "Point[]");
        }
        inline app::Point__Array* create() {
            return il2cpp::create_object<app::Point__Array>(get_class());
        }
    } // namespace Point__Array
} // namespace app::classes::types
