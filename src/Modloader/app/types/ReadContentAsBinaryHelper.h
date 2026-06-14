#pragma once
#include <Modloader/app/structs/ReadContentAsBinaryHelper.h>
#include <Modloader/app/structs/ReadContentAsBinaryHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadContentAsBinaryHelper {
        inline app::ReadContentAsBinaryHelper__Class** type_info() {
            static app::ReadContentAsBinaryHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadContentAsBinaryHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadContentAsBinaryHelper__Class* get_class() {
            return il2cpp::get_class<app::ReadContentAsBinaryHelper__Class>(type_info(), "System.Xml", "ReadContentAsBinaryHelper");
        }
        inline app::ReadContentAsBinaryHelper* create() {
            return il2cpp::create_object<app::ReadContentAsBinaryHelper>(get_class());
        }
    } // namespace ReadContentAsBinaryHelper
} // namespace app::classes::types
