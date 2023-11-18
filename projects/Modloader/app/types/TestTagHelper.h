#pragma once
#include <Modloader/app/structs/TestTagHelper.h>
#include <Modloader/app/structs/TestTagHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestTagHelper {
        inline app::TestTagHelper__Class** type_info() {
            static app::TestTagHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestTagHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestTagHelper__Class* get_class() {
            return il2cpp::get_class<app::TestTagHelper__Class>(type_info(), "", "TestTagHelper");
        }
        inline app::TestTagHelper* create() {
            return il2cpp::create_object<app::TestTagHelper>(get_class());
        }
    } // namespace TestTagHelper
} // namespace app::classes::types
