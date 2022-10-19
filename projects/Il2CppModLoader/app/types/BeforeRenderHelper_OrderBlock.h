#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BeforeRenderHelper_OrderBlock {
        inline app::BeforeRenderHelper_OrderBlock__Class** type_info = (app::BeforeRenderHelper_OrderBlock__Class**)(modloader::win::memory::resolve_rva(0x047464C0));
        inline app::BeforeRenderHelper_OrderBlock__Class* get_class() {
            return il2cpp::get_nested_class<app::BeforeRenderHelper_OrderBlock__Class>(type_info, "UnityEngine", "BeforeRenderHelper", "OrderBlock");
        }
        inline app::BeforeRenderHelper_OrderBlock* create() {
            return il2cpp::create_object<app::BeforeRenderHelper_OrderBlock>(get_class());
        }
        inline app::BeforeRenderHelper_OrderBlock__Boxed* box(app::BeforeRenderHelper_OrderBlock value) {
            return il2cpp::box_value<app::BeforeRenderHelper_OrderBlock__Boxed>(get_class(), value);
        }
        inline app::BeforeRenderHelper_OrderBlock__Array* create_array(int size) {
            return il2cpp::array_new<app::BeforeRenderHelper_OrderBlock__Array>(get_class(), size);
        }
        inline app::BeforeRenderHelper_OrderBlock__Array* create_array(const std::vector<app::BeforeRenderHelper_OrderBlock>& items) {
            return il2cpp::array_new<app::BeforeRenderHelper_OrderBlock__Array>(get_class(), items);
        }
    } // namespace BeforeRenderHelper_OrderBlock
} // namespace app::classes::types
