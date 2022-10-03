#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Void {
        namespace {
            app::Void__Class* type_info_ref = nullptr;
        }
        app::Void__Class** type_info = &type_info_ref;
        inline app::Void__Class* get_class() {
            return il2cpp::get_class<app::Void__Class>(type_info, "System", "Void");
        }
        inline app::Void* create() {
            return il2cpp::create_object<app::Void>(get_class());
        }
        inline app::Void__Boxed* box(app::Void value) {
            return il2cpp::box_value<app::Void__Boxed>(get_class(), value);
        }
    } // namespace Void
} // namespace app::classes::types
