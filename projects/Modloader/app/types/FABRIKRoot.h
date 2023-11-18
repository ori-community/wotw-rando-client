#pragma once
#include <Modloader/app/structs/FABRIKRoot.h>
#include <Modloader/app/structs/FABRIKRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FABRIKRoot {
        inline app::FABRIKRoot__Class** type_info() {
            static app::FABRIKRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x04727000));
            }
            return cache;
        }
        inline app::FABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::FABRIKRoot__Class>(type_info(), "RootMotion.FinalIK", "FABRIKRoot");
        }
        inline app::FABRIKRoot* create() {
            return il2cpp::create_object<app::FABRIKRoot>(get_class());
        }
    } // namespace FABRIKRoot
} // namespace app::classes::types
