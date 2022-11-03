#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartPlaceholder__Array {
        namespace {
            inline app::CartPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        inline app::CartPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::CartPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::CartPlaceholder__Array__Class>(type_info, "", "CartPlaceholder[]");
        }
        inline app::CartPlaceholder__Array* create() {
            return il2cpp::create_object<app::CartPlaceholder__Array>(get_class());
        }
    } // namespace CartPlaceholder__Array
} // namespace app::classes::types
