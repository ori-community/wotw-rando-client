#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteAction_c__Class.h>
#include <Modloader/app/structs/RemoteAction_c.h>

namespace app::classes::types {
    namespace RemoteAction_c {
        inline app::RemoteAction_c__Class** type_info = (app::RemoteAction_c__Class**)(modloader::win::memory::resolve_rva(0x047392D0));
        inline app::RemoteAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RemoteAction_c__Class>(type_info, "", "RemoteAction", "<>c");
        }
        inline app::RemoteAction_c* create() {
            return il2cpp::create_object<app::RemoteAction_c>(get_class());
        }
    } // namespace RemoteAction_c
} // namespace app::classes::types
