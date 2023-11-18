#pragma once
#include <Modloader/app/structs/IKLimbTargeted.h>
#include <Modloader/app/structs/IKLimbTargeted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKLimbTargeted {
        inline app::IKLimbTargeted__Class** type_info() {
            static app::IKLimbTargeted__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKLimbTargeted__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKLimbTargeted__Class* get_class() {
            return il2cpp::get_class<app::IKLimbTargeted__Class>(type_info(), "Moon", "IKLimbTargeted");
        }
        inline app::IKLimbTargeted* create() {
            return il2cpp::create_object<app::IKLimbTargeted>(get_class());
        }
    } // namespace IKLimbTargeted
} // namespace app::classes::types
