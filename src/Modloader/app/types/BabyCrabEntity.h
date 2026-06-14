#pragma once
#include <Modloader/app/structs/BabyCrabEntity.h>
#include <Modloader/app/structs/BabyCrabEntity__Array.h>
#include <Modloader/app/structs/BabyCrabEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyCrabEntity {
        inline app::BabyCrabEntity__Class** type_info() {
            static app::BabyCrabEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyCrabEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyCrabEntity__Class* get_class() {
            return il2cpp::get_class<app::BabyCrabEntity__Class>(type_info(), "", "BabyCrabEntity");
        }
        inline app::BabyCrabEntity* create() {
            return il2cpp::create_object<app::BabyCrabEntity>(get_class());
        }
        inline app::BabyCrabEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::BabyCrabEntity__Array>(get_class(), size);
        }
        inline app::BabyCrabEntity__Array* create_array(const std::vector<app::BabyCrabEntity*>& items) {
            return il2cpp::array_new<app::BabyCrabEntity__Array>(get_class(), items);
        }
    } // namespace BabyCrabEntity
} // namespace app::classes::types
