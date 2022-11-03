#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReEngageUI {
        inline app::ReEngageUI__Class** type_info = (app::ReEngageUI__Class**)(modloader::win::memory::resolve_rva(0x0473E370));
        inline app::ReEngageUI__Class* get_class() {
            return il2cpp::get_class<app::ReEngageUI__Class>(type_info, "", "ReEngageUI");
        }
        inline app::ReEngageUI* create() {
            return il2cpp::create_object<app::ReEngageUI>(get_class());
        }
    } // namespace ReEngageUI
} // namespace app::classes::types
