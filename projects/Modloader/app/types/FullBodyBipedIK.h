#pragma once
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/FullBodyBipedIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FullBodyBipedIK {
        inline app::FullBodyBipedIK__Class** type_info() {
            static app::FullBodyBipedIK__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FullBodyBipedIK__Class**)(modloader::win::memory::resolve_rva(0x0476FA80));
            }
            return cache;
        }
        inline app::FullBodyBipedIK__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedIK__Class>(type_info(), "RootMotion.FinalIK", "FullBodyBipedIK");
        }
        inline app::FullBodyBipedIK* create() {
            return il2cpp::create_object<app::FullBodyBipedIK>(get_class());
        }
    } // namespace FullBodyBipedIK
} // namespace app::classes::types
