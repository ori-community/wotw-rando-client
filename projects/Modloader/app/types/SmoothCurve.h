#pragma once
#include <Modloader/app/structs/SmoothCurve.h>
#include <Modloader/app/structs/SmoothCurve__Array.h>
#include <Modloader/app/structs/SmoothCurve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothCurve {
        inline app::SmoothCurve__Class** type_info() {
            static app::SmoothCurve__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothCurve__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothCurve__Class* get_class() {
            return il2cpp::get_class<app::SmoothCurve__Class>(type_info(), "", "SmoothCurve");
        }
        inline app::SmoothCurve* create() {
            return il2cpp::create_object<app::SmoothCurve>(get_class());
        }
        inline app::SmoothCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::SmoothCurve__Array>(get_class(), size);
        }
        inline app::SmoothCurve__Array* create_array(const std::vector<app::SmoothCurve*>& items) {
            return il2cpp::array_new<app::SmoothCurve__Array>(get_class(), items);
        }
    } // namespace SmoothCurve
} // namespace app::classes::types
