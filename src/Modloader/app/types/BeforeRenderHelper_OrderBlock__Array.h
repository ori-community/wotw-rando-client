#pragma once
#include <Modloader/app/structs/BeforeRenderHelper_OrderBlock__Array.h>
#include <Modloader/app/structs/BeforeRenderHelper_OrderBlock__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BeforeRenderHelper_OrderBlock__Array {
        inline app::BeforeRenderHelper_OrderBlock__Array__Class** type_info() {
            static app::BeforeRenderHelper_OrderBlock__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BeforeRenderHelper_OrderBlock__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BeforeRenderHelper_OrderBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::BeforeRenderHelper_OrderBlock__Array__Class>(type_info(), "UnityEngine", "BeforeRenderHelper+OrderBlock[]");
        }
        inline app::BeforeRenderHelper_OrderBlock__Array* create() {
            return il2cpp::create_object<app::BeforeRenderHelper_OrderBlock__Array>(get_class());
        }
    } // namespace BeforeRenderHelper_OrderBlock__Array
} // namespace app::classes::types
