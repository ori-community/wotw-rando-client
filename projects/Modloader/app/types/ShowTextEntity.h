#pragma once
#include <Modloader/app/structs/ShowTextEntity.h>
#include <Modloader/app/structs/ShowTextEntity__Array.h>
#include <Modloader/app/structs/ShowTextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowTextEntity {
        inline app::ShowTextEntity__Class** type_info() {
            static app::ShowTextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowTextEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowTextEntity__Class>(type_info(), "Moon.Timeline", "ShowTextEntity");
        }
        inline app::ShowTextEntity* create() {
            return il2cpp::create_object<app::ShowTextEntity>(get_class());
        }
        inline app::ShowTextEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ShowTextEntity__Array>(get_class(), size);
        }
        inline app::ShowTextEntity__Array* create_array(const std::vector<app::ShowTextEntity*>& items) {
            return il2cpp::array_new<app::ShowTextEntity__Array>(get_class(), items);
        }
    } // namespace ShowTextEntity
} // namespace app::classes::types
