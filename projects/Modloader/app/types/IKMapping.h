#pragma once
#include <Modloader/app/structs/IKMapping.h>
#include <Modloader/app/structs/IKMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMapping {
        inline app::IKMapping__Class** type_info() {
            static app::IKMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKMapping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKMapping__Class* get_class() {
            return il2cpp::get_class<app::IKMapping__Class>(type_info(), "RootMotion.FinalIK", "IKMapping");
        }
        inline app::IKMapping* create() {
            return il2cpp::create_object<app::IKMapping>(get_class());
        }
    } // namespace IKMapping
} // namespace app::classes::types
