#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetMemberBinder {
        inline app::SetMemberBinder__Class** type_info = (app::SetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x04719358));
        inline app::SetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::SetMemberBinder__Class>(type_info, "System.Dynamic", "SetMemberBinder");
        }
        inline app::SetMemberBinder* create() {
            return il2cpp::create_object<app::SetMemberBinder>(get_class());
        }
    } // namespace SetMemberBinder
} // namespace app::classes::types
