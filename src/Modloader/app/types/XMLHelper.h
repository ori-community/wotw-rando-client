#pragma once
#include <Modloader/app/structs/XMLHelper.h>
#include <Modloader/app/structs/XMLHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XMLHelper {
        inline app::XMLHelper__Class** type_info() {
            static app::XMLHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XMLHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XMLHelper__Class* get_class() {
            return il2cpp::get_class<app::XMLHelper__Class>(type_info(), "", "XMLHelper");
        }
        inline app::XMLHelper* create() {
            return il2cpp::create_object<app::XMLHelper>(get_class());
        }
    } // namespace XMLHelper
} // namespace app::classes::types
