#pragma once
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpressionType__Enum {
        inline app::ExpressionType__Enum__Class** type_info() {
            static app::ExpressionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpressionType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04703C60));
            }
            return cache;
        }
        inline app::ExpressionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExpressionType__Enum__Class>(type_info(), "System.Linq.Expressions", "ExpressionType");
        }
        inline app::ExpressionType__Enum* create() {
            return il2cpp::create_object<app::ExpressionType__Enum>(get_class());
        }
    } // namespace ExpressionType__Enum
} // namespace app::classes::types
