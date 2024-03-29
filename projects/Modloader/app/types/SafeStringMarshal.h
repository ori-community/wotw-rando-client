#pragma once
#include <Modloader/app/structs/SafeStringMarshal.h>
#include <Modloader/app/structs/SafeStringMarshal__Boxed.h>
#include <Modloader/app/structs/SafeStringMarshal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeStringMarshal {
        inline app::SafeStringMarshal__Class** type_info() {
            static app::SafeStringMarshal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafeStringMarshal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafeStringMarshal__Class* get_class() {
            return il2cpp::get_class<app::SafeStringMarshal__Class>(type_info(), "Mono", "SafeStringMarshal");
        }
        inline app::SafeStringMarshal* create() {
            return il2cpp::create_object<app::SafeStringMarshal>(get_class());
        }
        inline app::SafeStringMarshal__Boxed* box(app::SafeStringMarshal value) {
            return il2cpp::box_value<app::SafeStringMarshal__Boxed>(get_class(), value);
        }
    } // namespace SafeStringMarshal
} // namespace app::classes::types
