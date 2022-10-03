#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFObject {
        namespace {
            app::CFObject__Class* type_info_ref = nullptr;
        }
        app::CFObject__Class** type_info = &type_info_ref;
        inline app::CFObject__Class* get_class() {
            return il2cpp::get_class<app::CFObject__Class>(type_info, "Mono.Net", "CFObject");
        }
        inline app::CFObject* create() {
            return il2cpp::create_object<app::CFObject>(get_class());
        }
    } // namespace CFObject
} // namespace app::classes::types
