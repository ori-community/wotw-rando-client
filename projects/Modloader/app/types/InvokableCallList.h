#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvokableCallList {
        inline app::InvokableCallList__Class** type_info = (app::InvokableCallList__Class**)(modloader::win::memory::resolve_rva(0x0473DC70));
        inline app::InvokableCallList__Class* get_class() {
            return il2cpp::get_class<app::InvokableCallList__Class>(type_info, "UnityEngine.Events", "InvokableCallList");
        }
        inline app::InvokableCallList* create() {
            return il2cpp::create_object<app::InvokableCallList>(get_class());
        }
    } // namespace InvokableCallList
} // namespace app::classes::types
