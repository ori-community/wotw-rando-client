#pragma once
#include <Modloader/app/structs/IControllerShake__Array.h>
#include <Modloader/app/structs/IControllerShake__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IControllerShake__Array {
        inline app::IControllerShake__Array__Class** type_info() {
            static app::IControllerShake__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IControllerShake__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IControllerShake__Array__Class* get_class() {
            return il2cpp::get_class<app::IControllerShake__Array__Class>(type_info(), "", "IControllerShake[]");
        }
        inline app::IControllerShake__Array* create() {
            return il2cpp::create_object<app::IControllerShake__Array>(get_class());
        }
    } // namespace IControllerShake__Array
} // namespace app::classes::types
