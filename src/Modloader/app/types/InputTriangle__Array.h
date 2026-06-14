#pragma once
#include <Modloader/app/structs/InputTriangle__Array.h>
#include <Modloader/app/structs/InputTriangle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputTriangle__Array {
        inline app::InputTriangle__Array__Class** type_info() {
            static app::InputTriangle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B5E0));
            }
            return cache;
        }
        inline app::InputTriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::InputTriangle__Array__Class>(type_info(), "TriangleNet.IO", "InputTriangle[]");
        }
        inline app::InputTriangle__Array* create() {
            return il2cpp::create_object<app::InputTriangle__Array>(get_class());
        }
    } // namespace InputTriangle__Array
} // namespace app::classes::types
