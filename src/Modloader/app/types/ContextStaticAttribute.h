#pragma once
#include <Modloader/app/structs/ContextStaticAttribute.h>
#include <Modloader/app/structs/ContextStaticAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextStaticAttribute {
        inline app::ContextStaticAttribute__Class** type_info() {
            static app::ContextStaticAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContextStaticAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContextStaticAttribute__Class* get_class() {
            return il2cpp::get_class<app::ContextStaticAttribute__Class>(type_info(), "System", "ContextStaticAttribute");
        }
        inline app::ContextStaticAttribute* create() {
            return il2cpp::create_object<app::ContextStaticAttribute>(get_class());
        }
    } // namespace ContextStaticAttribute
} // namespace app::classes::types
