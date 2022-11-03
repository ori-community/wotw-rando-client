#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelegateHelpers_c {
        inline app::DelegateHelpers_c__Class** type_info = (app::DelegateHelpers_c__Class**)(modloader::win::memory::resolve_rva(0x0476EED0));
        inline app::DelegateHelpers_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateHelpers_c__Class>(type_info, "System.Linq.Expressions.Interpreter", "DelegateHelpers", "<>c");
        }
        inline app::DelegateHelpers_c* create() {
            return il2cpp::create_object<app::DelegateHelpers_c>(get_class());
        }
    } // namespace DelegateHelpers_c
} // namespace app::classes::types
