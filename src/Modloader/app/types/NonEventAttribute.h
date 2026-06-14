#pragma once
#include <Modloader/app/structs/NonEventAttribute.h>
#include <Modloader/app/structs/NonEventAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonEventAttribute {
        inline app::NonEventAttribute__Class** type_info() {
            static app::NonEventAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NonEventAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NonEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::NonEventAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "NonEventAttribute");
        }
        inline app::NonEventAttribute* create() {
            return il2cpp::create_object<app::NonEventAttribute>(get_class());
        }
    } // namespace NonEventAttribute
} // namespace app::classes::types
