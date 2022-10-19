#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateMatcher {
        inline app::UberStateMatcher__Class** type_info = (app::UberStateMatcher__Class**)(modloader::win::memory::resolve_rva(0x0477DBE0));
        inline app::UberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcher__Class>(type_info, "", "UberStateMatcher");
        }
        inline app::UberStateMatcher* create() {
            return il2cpp::create_object<app::UberStateMatcher>(get_class());
        }
    } // namespace UberStateMatcher
} // namespace app::classes::types
