#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntUberStateMatcher {
        namespace {
            inline app::IntUberStateMatcher__Class* type_info_ref = nullptr;
        }
        inline app::IntUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::IntUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::IntUberStateMatcher__Class>(type_info, "", "IntUberStateMatcher");
        }
        inline app::IntUberStateMatcher* create() {
            return il2cpp::create_object<app::IntUberStateMatcher>(get_class());
        }
    } // namespace IntUberStateMatcher
} // namespace app::classes::types
