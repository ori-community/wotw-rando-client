#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetSeinColliderHeight {
        namespace {
            app::SetSeinColliderHeight__Class* type_info_ref = nullptr;
        }
        app::SetSeinColliderHeight__Class** type_info = &type_info_ref;
        inline app::SetSeinColliderHeight__Class* get_class() {
            return il2cpp::get_class<app::SetSeinColliderHeight__Class>(type_info, "", "SetSeinColliderHeight");
        }
        inline app::SetSeinColliderHeight* create() {
            return il2cpp::create_object<app::SetSeinColliderHeight>(get_class());
        }
    } // namespace SetSeinColliderHeight
} // namespace app::classes::types
