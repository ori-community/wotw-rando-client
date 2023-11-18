#pragma once
#include <Modloader/app/structs/TypedReference.h>
#include <Modloader/app/structs/TypedReference__Boxed.h>
#include <Modloader/app/structs/TypedReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypedReference {
        inline app::TypedReference__Class** type_info() {
            static app::TypedReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypedReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypedReference__Class* get_class() {
            return il2cpp::get_class<app::TypedReference__Class>(type_info(), "System", "TypedReference");
        }
        inline app::TypedReference* create() {
            return il2cpp::create_object<app::TypedReference>(get_class());
        }
        inline app::TypedReference__Boxed* box(app::TypedReference value) {
            return il2cpp::box_value<app::TypedReference__Boxed>(get_class(), value);
        }
    } // namespace TypedReference
} // namespace app::classes::types
