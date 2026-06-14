#pragma once
#include <Modloader/app/structs/InstanceMethodCallExpression0.h>
#include <Modloader/app/structs/InstanceMethodCallExpression0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression0 {
        inline app::InstanceMethodCallExpression0__Class** type_info() {
            static app::InstanceMethodCallExpression0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstanceMethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x0471C820));
            }
            return cache;
        }
        inline app::InstanceMethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression0__Class>(type_info(), "System.Linq.Expressions", "InstanceMethodCallExpression0");
        }
        inline app::InstanceMethodCallExpression0* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression0>(get_class());
        }
    } // namespace InstanceMethodCallExpression0
} // namespace app::classes::types
