#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CLSCompliantAttribute {
        namespace {
            app::CLSCompliantAttribute__Class* type_info_ref = nullptr;
        }
        app::CLSCompliantAttribute__Class** type_info = &type_info_ref;
        inline app::CLSCompliantAttribute__Class* get_class() {
            return il2cpp::get_class<app::CLSCompliantAttribute__Class>(type_info, "System", "CLSCompliantAttribute");
        }
        inline app::CLSCompliantAttribute* create() {
            return il2cpp::create_object<app::CLSCompliantAttribute>(get_class());
        }
    } // namespace CLSCompliantAttribute
} // namespace app::classes::types
