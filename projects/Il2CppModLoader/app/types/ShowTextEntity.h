#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowTextEntity {
        namespace {
            app::ShowTextEntity__Class* type_info_ref = nullptr;
        }
        app::ShowTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowTextEntity__Class>(type_info, "Moon.Timeline", "ShowTextEntity");
        }
        inline app::ShowTextEntity* create() {
            return il2cpp::create_object<app::ShowTextEntity>(get_class());
        }
        inline app::ShowTextEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ShowTextEntity__Array>(get_class(), size);
        }
    } // namespace ShowTextEntity
} // namespace app::classes::types
