#pragma once
#include <Modloader/app/structs/CVRSettings.h>
#include <Modloader/app/structs/CVRSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSettings {
        inline app::CVRSettings__Class** type_info() {
            static app::CVRSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRSettings__Class**)(modloader::win::memory::resolve_rva(0x04727340));
            }
            return cache;
        }
        inline app::CVRSettings__Class* get_class() {
            return il2cpp::get_class<app::CVRSettings__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSettings");
        }
        inline app::CVRSettings* create() {
            return il2cpp::create_object<app::CVRSettings>(get_class());
        }
    } // namespace CVRSettings
} // namespace app::classes::types
