#pragma once
#include <Modloader/app/structs/CVRExtendedDisplay.h>
#include <Modloader/app/structs/CVRExtendedDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRExtendedDisplay {
        inline app::CVRExtendedDisplay__Class** type_info() {
            static app::CVRExtendedDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x04770C78));
            }
            return cache;
        }
        inline app::CVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::CVRExtendedDisplay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRExtendedDisplay");
        }
        inline app::CVRExtendedDisplay* create() {
            return il2cpp::create_object<app::CVRExtendedDisplay>(get_class());
        }
    } // namespace CVRExtendedDisplay
} // namespace app::classes::types
