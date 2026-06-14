#pragma once
#include <Modloader/app/structs/MethodCallExpression5.h>
#include <Modloader/app/structs/MethodCallExpression5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression5 {
        inline app::MethodCallExpression5__Class** type_info() {
            static app::MethodCallExpression5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCallExpression5__Class**)(modloader::win::memory::resolve_rva(0x04752F18));
            }
            return cache;
        }
        inline app::MethodCallExpression5__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression5__Class>(type_info(), "System.Linq.Expressions", "MethodCallExpression5");
        }
        inline app::MethodCallExpression5* create() {
            return il2cpp::create_object<app::MethodCallExpression5>(get_class());
        }
    } // namespace MethodCallExpression5
} // namespace app::classes::types
