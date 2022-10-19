#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateUnion {
        namespace {
            inline app::StateUnion__Class* type_info_ref = nullptr;
        }
        inline app::StateUnion__Class** type_info = &type_info_ref;
        inline app::StateUnion__Class* get_class() {
            return il2cpp::get_class<app::StateUnion__Class>(type_info, "System.Xml.Schema", "StateUnion");
        }
        inline app::StateUnion* create() {
            return il2cpp::create_object<app::StateUnion>(get_class());
        }
        inline app::StateUnion__Boxed* box(app::StateUnion value) {
            return il2cpp::box_value<app::StateUnion__Boxed>(get_class(), value);
        }
    } // namespace StateUnion
} // namespace app::classes::types
