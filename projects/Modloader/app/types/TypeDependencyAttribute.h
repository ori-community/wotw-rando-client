#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDependencyAttribute {
        namespace {
            inline app::TypeDependencyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TypeDependencyAttribute__Class** type_info = &type_info_ref;
        inline app::TypeDependencyAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeDependencyAttribute__Class>(type_info, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
        }
        inline app::TypeDependencyAttribute* create() {
            return il2cpp::create_object<app::TypeDependencyAttribute>(get_class());
        }
    } // namespace TypeDependencyAttribute
} // namespace app::classes::types
