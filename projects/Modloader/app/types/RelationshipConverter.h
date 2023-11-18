#pragma once
#include <Modloader/app/structs/RelationshipConverter.h>
#include <Modloader/app/structs/RelationshipConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RelationshipConverter {
        inline app::RelationshipConverter__Class** type_info() {
            static app::RelationshipConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RelationshipConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RelationshipConverter__Class* get_class() {
            return il2cpp::get_class<app::RelationshipConverter__Class>(type_info(), "System.Data", "RelationshipConverter");
        }
        inline app::RelationshipConverter* create() {
            return il2cpp::create_object<app::RelationshipConverter>(get_class());
        }
    } // namespace RelationshipConverter
} // namespace app::classes::types
