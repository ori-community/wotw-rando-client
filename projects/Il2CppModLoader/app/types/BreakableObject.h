#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakableObject {
        namespace {
            app::BreakableObject__Class* type_info_ref = nullptr;
        }
        app::BreakableObject__Class** type_info = &type_info_ref;
        inline app::BreakableObject__Class* get_class() {
            return il2cpp::get_class<app::BreakableObject__Class>(type_info, "", "BreakableObject");
        }
        inline app::BreakableObject* create() {
            return il2cpp::create_object<app::BreakableObject>(get_class());
        }
    } // namespace BreakableObject
} // namespace app::classes::types
