#pragma once
#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/AttachJointSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachJointSettings {
        inline app::AttachJointSettings__Class** type_info() {
            static app::AttachJointSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttachJointSettings__Class**)(modloader::win::memory::resolve_rva(0x0474CDC0));
            }
            return cache;
        }
        inline app::AttachJointSettings__Class* get_class() {
            return il2cpp::get_class<app::AttachJointSettings__Class>(type_info(), "Moon", "AttachJointSettings");
        }
        inline app::AttachJointSettings* create() {
            return il2cpp::create_object<app::AttachJointSettings>(get_class());
        }
    } // namespace AttachJointSettings
} // namespace app::classes::types
