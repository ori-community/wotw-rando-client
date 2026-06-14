#pragma once
#include <Modloader/app/structs/SeinMortality.h>
#include <Modloader/app/structs/SeinMortality__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMortality {
        inline app::SeinMortality__Class** type_info() {
            static app::SeinMortality__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMortality__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMortality__Class* get_class() {
            return il2cpp::get_class<app::SeinMortality__Class>(type_info(), "", "SeinMortality");
        }
        inline app::SeinMortality* create() {
            return il2cpp::create_object<app::SeinMortality>(get_class());
        }
    } // namespace SeinMortality
} // namespace app::classes::types
