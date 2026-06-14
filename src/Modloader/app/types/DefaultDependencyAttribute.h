#pragma once
#include <Modloader/app/structs/DefaultDependencyAttribute.h>
#include <Modloader/app/structs/DefaultDependencyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultDependencyAttribute {
        inline app::DefaultDependencyAttribute__Class** type_info() {
            static app::DefaultDependencyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultDependencyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultDependencyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultDependencyAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
        }
        inline app::DefaultDependencyAttribute* create() {
            return il2cpp::create_object<app::DefaultDependencyAttribute>(get_class());
        }
    } // namespace DefaultDependencyAttribute
} // namespace app::classes::types
