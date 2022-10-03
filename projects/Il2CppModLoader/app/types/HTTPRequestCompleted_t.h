#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HTTPRequestCompleted_t {
        namespace {
            app::HTTPRequestCompleted_t__Class* type_info_ref = nullptr;
        }
        app::HTTPRequestCompleted_t__Class** type_info = &type_info_ref;
        inline app::HTTPRequestCompleted_t__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestCompleted_t__Class>(type_info, "Steamworks", "HTTPRequestCompleted_t");
        }
        inline app::HTTPRequestCompleted_t* create() {
            return il2cpp::create_object<app::HTTPRequestCompleted_t>(get_class());
        }
        inline app::HTTPRequestCompleted_t__Boxed* box(app::HTTPRequestCompleted_t value) {
            return il2cpp::box_value<app::HTTPRequestCompleted_t__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestCompleted_t
} // namespace app::classes::types
