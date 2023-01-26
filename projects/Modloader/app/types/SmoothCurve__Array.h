#pragma once
#include <Modloader/app/structs/SmoothCurve__Array.h>
#include <Modloader/app/structs/SmoothCurve__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve__Array {
        inline app::SmoothCurve__Array__Class** type_info() {
            static app::SmoothCurve__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmoothCurve__Array__Class**)(modloader::win::memory::resolve_rva(0x047547B8));
            }
            return cache;
        }
        inline app::SmoothCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::SmoothCurve__Array__Class>(type_info(), "", "SmoothCurve[]");
        }
        inline app::SmoothCurve__Array* create() {
            return il2cpp::create_object<app::SmoothCurve__Array>(get_class());
        }
    } // namespace SmoothCurve__Array
} // namespace app::classes::types
