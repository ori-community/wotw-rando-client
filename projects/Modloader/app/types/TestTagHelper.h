#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestTagHelper__Class.h>
#include <Modloader/app/structs/TestTagHelper.h>

namespace app::classes::types {
    namespace TestTagHelper {
        namespace {
            inline app::TestTagHelper__Class* type_info_ref = nullptr;
        }
        inline app::TestTagHelper__Class** type_info = &type_info_ref;
        inline app::TestTagHelper__Class* get_class() {
            return il2cpp::get_class<app::TestTagHelper__Class>(type_info, "", "TestTagHelper");
        }
        inline app::TestTagHelper* create() {
            return il2cpp::create_object<app::TestTagHelper>(get_class());
        }
    } // namespace TestTagHelper
} // namespace app::classes::types
