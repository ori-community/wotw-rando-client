#pragma once
#include <Modloader/app/structs/CCTextModifier__Array.h>
#include <Modloader/app/structs/CCTextModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextModifier__Array {
        inline app::CCTextModifier__Array__Class** type_info() {
            static app::CCTextModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::CCTextModifier__Array__Class>(type_info(), "", "CCTextModifier[]");
        }
        inline app::CCTextModifier__Array* create() {
            return il2cpp::create_object<app::CCTextModifier__Array>(get_class());
        }
    } // namespace CCTextModifier__Array
} // namespace app::classes::types
