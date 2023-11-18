#pragma once
#include <Modloader/app/structs/InstanceMethodCallExpression2.h>
#include <Modloader/app/structs/InstanceMethodCallExpression2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression2 {
        inline app::InstanceMethodCallExpression2__Class** type_info() {
            static app::InstanceMethodCallExpression2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstanceMethodCallExpression2__Class**)(modloader::win::memory::resolve_rva(0x04731650));
            }
            return cache;
        }
        inline app::InstanceMethodCallExpression2__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression2__Class>(type_info(), "System.Linq.Expressions", "InstanceMethodCallExpression2");
        }
        inline app::InstanceMethodCallExpression2* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression2>(get_class());
        }
    } // namespace InstanceMethodCallExpression2
} // namespace app::classes::types
