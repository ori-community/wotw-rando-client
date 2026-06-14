#pragma once
#include <Modloader/app/structs/Point__Array.h>
#include <Modloader/app/structs/Point__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Point__Array {
        inline app::Point__Array__Class** type_info() {
            static app::Point__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04758100));
            }
            return cache;
        }
        inline app::Point__Array__Class* get_class() {
            return il2cpp::get_class<app::Point__Array__Class>(type_info(), "TriangleNet.Geometry", "Point[]");
        }
        inline app::Point__Array* create() {
            return il2cpp::create_object<app::Point__Array>(get_class());
        }
    } // namespace Point__Array
} // namespace app::classes::types
