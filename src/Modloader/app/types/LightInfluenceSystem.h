#pragma once
#include <Modloader/app/structs/LightInfluenceSystem.h>
#include <Modloader/app/structs/LightInfluenceSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightInfluenceSystem {
        inline app::LightInfluenceSystem__Class** type_info() {
            static app::LightInfluenceSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightInfluenceSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightInfluenceSystem__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSystem__Class>(type_info(), "", "LightInfluenceSystem");
        }
        inline app::LightInfluenceSystem* create() {
            return il2cpp::create_object<app::LightInfluenceSystem>(get_class());
        }
    } // namespace LightInfluenceSystem
} // namespace app::classes::types
