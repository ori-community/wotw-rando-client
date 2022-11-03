#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberBindingType__Enum {
        inline app::MemberBindingType__Enum__Class** type_info = (app::MemberBindingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705770));
        inline app::MemberBindingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberBindingType__Enum__Class>(type_info, "System.Linq.Expressions", "MemberBindingType");
        }
        inline app::MemberBindingType__Enum* create() {
            return il2cpp::create_object<app::MemberBindingType__Enum>(get_class());
        }
    } // namespace MemberBindingType__Enum
} // namespace app::classes::types
