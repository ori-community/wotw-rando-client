#pragma once
#include <Modloader/app/structs/MonoLimitationAttribute.h>
#include <Modloader/app/structs/MonoLimitationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoLimitationAttribute {
        inline app::MonoLimitationAttribute__Class** type_info() {
            static app::MonoLimitationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoLimitationAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoLimitationAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoLimitationAttribute__Class>(type_info(), "System", "MonoLimitationAttribute");
        }
        inline app::MonoLimitationAttribute* create() {
            return il2cpp::create_object<app::MonoLimitationAttribute>(get_class());
        }
    } // namespace MonoLimitationAttribute
} // namespace app::classes::types
