#pragma once
#include <Modloader/app/structs/CageMath.h>
#include <Modloader/app/structs/CageMath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageMath {
        inline app::CageMath__Class** type_info() {
            static app::CageMath__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageMath__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageMath__Class* get_class() {
            return il2cpp::get_class<app::CageMath__Class>(type_info(), "", "CageMath");
        }
        inline app::CageMath* create() {
            return il2cpp::create_object<app::CageMath>(get_class());
        }
    } // namespace CageMath
} // namespace app::classes::types
