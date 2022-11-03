#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolManager_RunDelayed_d_89 {
        inline app::UberPoolManager_RunDelayed_d_89__Class** type_info = (app::UberPoolManager_RunDelayed_d_89__Class**)(modloader::win::memory::resolve_rva(0x0476ED40));
        inline app::UberPoolManager_RunDelayed_d_89__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_RunDelayed_d_89__Class>(type_info, "", "UberPoolManager", "<RunDelayed>d__89");
        }
        inline app::UberPoolManager_RunDelayed_d_89* create() {
            return il2cpp::create_object<app::UberPoolManager_RunDelayed_d_89>(get_class());
        }
    } // namespace UberPoolManager_RunDelayed_d_89
} // namespace app::classes::types
