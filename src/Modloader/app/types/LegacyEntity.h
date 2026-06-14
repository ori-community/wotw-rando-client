#pragma once
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/LegacyEntity__Array.h>
#include <Modloader/app/structs/LegacyEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEntity {
        inline app::LegacyEntity__Class** type_info() {
            static app::LegacyEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyEntity__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntity__Class>(type_info(), "", "LegacyEntity");
        }
        inline app::LegacyEntity* create() {
            return il2cpp::create_object<app::LegacyEntity>(get_class());
        }
        inline app::LegacyEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyEntity__Array>(get_class(), size);
        }
        inline app::LegacyEntity__Array* create_array(const std::vector<app::LegacyEntity*>& items) {
            return il2cpp::array_new<app::LegacyEntity__Array>(get_class(), items);
        }
    } // namespace LegacyEntity
} // namespace app::classes::types
