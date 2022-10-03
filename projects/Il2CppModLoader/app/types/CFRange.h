#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFRange {
        namespace {
            app::CFRange__Class* type_info_ref = nullptr;
        }
        app::CFRange__Class** type_info = &type_info_ref;
        inline app::CFRange__Class* get_class() {
            return il2cpp::get_class<app::CFRange__Class>(type_info, "Mono.Net", "CFRange");
        }
        inline app::CFRange* create() {
            return il2cpp::create_object<app::CFRange>(get_class());
        }
        inline app::CFRange__Boxed* box(app::CFRange value) {
            return il2cpp::box_value<app::CFRange__Boxed>(get_class(), value);
        }
    } // namespace CFRange
} // namespace app::classes::types
