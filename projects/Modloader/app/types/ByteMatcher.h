#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteMatcher {
        inline app::ByteMatcher__Class** type_info = (app::ByteMatcher__Class**)(modloader::win::memory::resolve_rva(0x04769A40));
        inline app::ByteMatcher__Class* get_class() {
            return il2cpp::get_class<app::ByteMatcher__Class>(type_info, "System", "ByteMatcher");
        }
        inline app::ByteMatcher* create() {
            return il2cpp::create_object<app::ByteMatcher>(get_class());
        }
    } // namespace ByteMatcher
} // namespace app::classes::types
