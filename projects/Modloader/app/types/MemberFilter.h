#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberFilter {
        inline app::MemberFilter__Class** type_info = (app::MemberFilter__Class**)(modloader::win::memory::resolve_rva(0x04797530));
        inline app::MemberFilter__Class* get_class() {
            return il2cpp::get_class<app::MemberFilter__Class>(type_info, "System.Reflection", "MemberFilter");
        }
        inline app::MemberFilter* create() {
            return il2cpp::create_object<app::MemberFilter>(get_class());
        }
    } // namespace MemberFilter
} // namespace app::classes::types
