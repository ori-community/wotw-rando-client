#pragma once
#include <Modloader/app/structs/DelegateHelpers_TypeInfo__Array.h>
#include <Modloader/app/structs/DelegateHelpers_TypeInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_TypeInfo__Array {
        inline app::DelegateHelpers_TypeInfo__Array__Class** type_info() {
            static app::DelegateHelpers_TypeInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelegateHelpers_TypeInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelegateHelpers_TypeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DelegateHelpers_TypeInfo__Array__Class>(type_info(), "System.Linq.Expressions.Compiler", "DelegateHelpers+TypeInfo[]");
        }
        inline app::DelegateHelpers_TypeInfo__Array* create() {
            return il2cpp::create_object<app::DelegateHelpers_TypeInfo__Array>(get_class());
        }
    } // namespace DelegateHelpers_TypeInfo__Array
} // namespace app::classes::types
