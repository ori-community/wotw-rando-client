#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BeforeRenderHelper_OrderBlock__Array {
        namespace {
            app::BeforeRenderHelper_OrderBlock__Array__Class* type_info_ref = nullptr;
        }
        app::BeforeRenderHelper_OrderBlock__Array__Class** type_info = &type_info_ref;
        inline app::BeforeRenderHelper_OrderBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::BeforeRenderHelper_OrderBlock__Array__Class>(type_info, "UnityEngine", "BeforeRenderHelper+OrderBlock[]");
        }
        inline app::BeforeRenderHelper_OrderBlock__Array* create() {
            return il2cpp::create_object<app::BeforeRenderHelper_OrderBlock__Array>(get_class());
        }
    } // namespace BeforeRenderHelper_OrderBlock__Array
} // namespace app::classes::types
