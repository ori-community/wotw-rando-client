#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SyncAnimations_c_DisplayClass10_0 {
        inline app::SyncAnimations_c_DisplayClass10_0__Class** type_info = (app::SyncAnimations_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x0477C760));
        inline app::SyncAnimations_c_DisplayClass10_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SyncAnimations_c_DisplayClass10_0__Class>(type_info, "", "SyncAnimations", "<>c__DisplayClass10_0");
        }
        inline app::SyncAnimations_c_DisplayClass10_0* create() {
            return il2cpp::create_object<app::SyncAnimations_c_DisplayClass10_0>(get_class());
        }
    } // namespace SyncAnimations_c_DisplayClass10_0
} // namespace app::classes::types
