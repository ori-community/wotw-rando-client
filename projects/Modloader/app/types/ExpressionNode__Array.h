#pragma once
#include <Modloader/app/structs/ExpressionNode__Array.h>
#include <Modloader/app/structs/ExpressionNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpressionNode__Array {
        inline app::ExpressionNode__Array__Class** type_info() {
            static app::ExpressionNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpressionNode__Array__Class**)(modloader::win::memory::resolve_rva(0x04719E58));
            }
            return cache;
        }
        inline app::ExpressionNode__Array__Class* get_class() {
            return il2cpp::get_class<app::ExpressionNode__Array__Class>(type_info(), "System.Data", "ExpressionNode[]");
        }
        inline app::ExpressionNode__Array* create() {
            return il2cpp::create_object<app::ExpressionNode__Array>(get_class());
        }
    } // namespace ExpressionNode__Array
} // namespace app::classes::types
