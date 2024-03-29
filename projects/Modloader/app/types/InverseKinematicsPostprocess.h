#pragma once
#include <Modloader/app/structs/InverseKinematicsPostprocess.h>
#include <Modloader/app/structs/InverseKinematicsPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsPostprocess {
        inline app::InverseKinematicsPostprocess__Class** type_info() {
            static app::InverseKinematicsPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InverseKinematicsPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0472BD40));
            }
            return cache;
        }
        inline app::InverseKinematicsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsPostprocess__Class>(type_info(), "Moon", "InverseKinematicsPostprocess");
        }
        inline app::InverseKinematicsPostprocess* create() {
            return il2cpp::create_object<app::InverseKinematicsPostprocess>(get_class());
        }
    } // namespace InverseKinematicsPostprocess
} // namespace app::classes::types
