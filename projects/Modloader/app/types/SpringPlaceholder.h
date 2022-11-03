#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpringPlaceholder {
        namespace {
            inline app::SpringPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpringPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpringPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpringPlaceholder__Class>(type_info, "", "SpringPlaceholder");
        }
        inline app::SpringPlaceholder* create() {
            return il2cpp::create_object<app::SpringPlaceholder>(get_class());
        }
    } // namespace SpringPlaceholder
} // namespace app::classes::types
