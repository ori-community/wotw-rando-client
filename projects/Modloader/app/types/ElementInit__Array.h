#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElementInit__Array {
        namespace {
            inline app::ElementInit__Array__Class* type_info_ref = nullptr;
        }
        inline app::ElementInit__Array__Class** type_info = &type_info_ref;
        inline app::ElementInit__Array__Class* get_class() {
            return il2cpp::get_class<app::ElementInit__Array__Class>(type_info, "System.Linq.Expressions", "ElementInit[]");
        }
        inline app::ElementInit__Array* create() {
            return il2cpp::create_object<app::ElementInit__Array>(get_class());
        }
    } // namespace ElementInit__Array
} // namespace app::classes::types
