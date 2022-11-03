#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FullBodyBipedIK {
        inline app::FullBodyBipedIK__Class** type_info = (app::FullBodyBipedIK__Class**)(modloader::win::memory::resolve_rva(0x0476FA80));
        inline app::FullBodyBipedIK__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedIK__Class>(type_info, "RootMotion.FinalIK", "FullBodyBipedIK");
        }
        inline app::FullBodyBipedIK* create() {
            return il2cpp::create_object<app::FullBodyBipedIK>(get_class());
        }
    } // namespace FullBodyBipedIK
} // namespace app::classes::types
