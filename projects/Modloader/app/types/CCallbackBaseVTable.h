#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable {
        inline app::CCallbackBaseVTable__Class** type_info = (app::CCallbackBaseVTable__Class**)(modloader::win::memory::resolve_rva(0x0476DDC0));
        inline app::CCallbackBaseVTable__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBaseVTable__Class>(type_info, "Steamworks", "CCallbackBaseVTable");
        }
        inline app::CCallbackBaseVTable* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable>(get_class());
        }
    } // namespace CCallbackBaseVTable
} // namespace app::classes::types
