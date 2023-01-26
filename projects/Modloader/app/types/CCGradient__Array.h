#pragma once
#include <Modloader/app/structs/CCGradient__Array.h>
#include <Modloader/app/structs/CCGradient__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCGradient__Array {
        inline app::CCGradient__Array__Class** type_info() {
            static app::CCGradient__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCGradient__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCGradient__Array__Class* get_class() {
            return il2cpp::get_class<app::CCGradient__Array__Class>(type_info(), "", "CCGradient[]");
        }
        inline app::CCGradient__Array* create() {
            return il2cpp::create_object<app::CCGradient__Array>(get_class());
        }
    } // namespace CCGradient__Array
} // namespace app::classes::types
