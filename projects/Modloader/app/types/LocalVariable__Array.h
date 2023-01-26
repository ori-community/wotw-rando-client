#pragma once
#include <Modloader/app/structs/LocalVariable__Array.h>
#include <Modloader/app/structs/LocalVariable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalVariable__Array {
        inline app::LocalVariable__Array__Class** type_info() {
            static app::LocalVariable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalVariable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalVariable__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariable__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalVariable[]");
        }
        inline app::LocalVariable__Array* create() {
            return il2cpp::create_object<app::LocalVariable__Array>(get_class());
        }
    } // namespace LocalVariable__Array
} // namespace app::classes::types
