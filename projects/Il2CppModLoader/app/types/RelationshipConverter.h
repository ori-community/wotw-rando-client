#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RelationshipConverter {
        namespace {
            app::RelationshipConverter__Class* type_info_ref = nullptr;
        }
        app::RelationshipConverter__Class** type_info = &type_info_ref;
        inline app::RelationshipConverter__Class* get_class() {
            return il2cpp::get_class<app::RelationshipConverter__Class>(type_info, "System.Data", "RelationshipConverter");
        }
        inline app::RelationshipConverter* create() {
            return il2cpp::create_object<app::RelationshipConverter>(get_class());
        }
    } // namespace RelationshipConverter
} // namespace app::classes::types
