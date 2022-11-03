#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnapTrapPlaceholder {
        namespace {
            inline app::SnapTrapPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SnapTrapPlaceholder__Class** type_info = &type_info_ref;
        inline app::SnapTrapPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapPlaceholder__Class>(type_info, "", "SnapTrapPlaceholder");
        }
        inline app::SnapTrapPlaceholder* create() {
            return il2cpp::create_object<app::SnapTrapPlaceholder>(get_class());
        }
    } // namespace SnapTrapPlaceholder
} // namespace app::classes::types
