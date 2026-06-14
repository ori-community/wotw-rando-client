#pragma once
#include <Modloader/app/structs/InstanceMethodCallExpression1.h>
#include <Modloader/app/structs/InstanceMethodCallExpression1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression1 {
        inline app::InstanceMethodCallExpression1__Class** type_info() {
            static app::InstanceMethodCallExpression1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstanceMethodCallExpression1__Class**)(modloader::win::memory::resolve_rva(0x04747960));
            }
            return cache;
        }
        inline app::InstanceMethodCallExpression1__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression1__Class>(type_info(), "System.Linq.Expressions", "InstanceMethodCallExpression1");
        }
        inline app::InstanceMethodCallExpression1* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression1>(get_class());
        }
    } // namespace InstanceMethodCallExpression1
} // namespace app::classes::types
