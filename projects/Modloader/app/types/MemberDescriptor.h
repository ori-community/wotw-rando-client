#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberDescriptor {
        inline app::MemberDescriptor__Class** type_info = (app::MemberDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774F78));
        inline app::MemberDescriptor__Class* get_class() {
            return il2cpp::get_class<app::MemberDescriptor__Class>(type_info, "System.ComponentModel", "MemberDescriptor");
        }
        inline app::MemberDescriptor* create() {
            return il2cpp::create_object<app::MemberDescriptor>(get_class());
        }
    } // namespace MemberDescriptor
} // namespace app::classes::types
