#pragma once
#include <Modloader/app/structs/TypeDependencyAttribute.h>
#include <Modloader/app/structs/TypeDependencyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDependencyAttribute {
        inline app::TypeDependencyAttribute__Class** type_info() {
            static app::TypeDependencyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeDependencyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeDependencyAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeDependencyAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "TypeDependencyAttribute");
        }
        inline app::TypeDependencyAttribute* create() {
            return il2cpp::create_object<app::TypeDependencyAttribute>(get_class());
        }
    } // namespace TypeDependencyAttribute
} // namespace app::classes::types
