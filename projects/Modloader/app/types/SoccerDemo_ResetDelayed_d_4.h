#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoccerDemo_ResetDelayed_d_4 {
        inline app::SoccerDemo_ResetDelayed_d_4__Class** type_info = (app::SoccerDemo_ResetDelayed_d_4__Class**)(modloader::win::memory::resolve_rva(0x04775CC8));
        inline app::SoccerDemo_ResetDelayed_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::SoccerDemo_ResetDelayed_d_4__Class>(type_info, "RootMotion.Demos", "SoccerDemo", "<ResetDelayed>d__4");
        }
        inline app::SoccerDemo_ResetDelayed_d_4* create() {
            return il2cpp::create_object<app::SoccerDemo_ResetDelayed_d_4>(get_class());
        }
    } // namespace SoccerDemo_ResetDelayed_d_4
} // namespace app::classes::types
