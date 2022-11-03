#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Link__Array {
        namespace {
            inline app::Link__Array__Class* type_info_ref = nullptr;
        }
        inline app::Link__Array__Class** type_info = &type_info_ref;
        inline app::Link__Array__Class* get_class() {
            return il2cpp::get_class<app::Link__Array__Class>(type_info, "", "Link[]");
        }
        inline app::Link__Array* create() {
            return il2cpp::create_object<app::Link__Array>(get_class());
        }
    } // namespace Link__Array
} // namespace app::classes::types
