#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetMemberBinder__Class.h>
#include <Modloader/app/structs/GetMemberBinder.h>

namespace app::classes::types {
    namespace GetMemberBinder {
        inline app::GetMemberBinder__Class** type_info = (app::GetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x047356A8));
        inline app::GetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::GetMemberBinder__Class>(type_info, "System.Dynamic", "GetMemberBinder");
        }
        inline app::GetMemberBinder* create() {
            return il2cpp::create_object<app::GetMemberBinder>(get_class());
        }
    } // namespace GetMemberBinder
} // namespace app::classes::types
