#pragma once
#include <Modloader/app/structs/GameplaySoundParameterMap.h>
#include <Modloader/app/structs/GameplaySoundParameterMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundParameterMap {
        inline app::GameplaySoundParameterMap__Class** type_info() {
            static app::GameplaySoundParameterMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplaySoundParameterMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplaySoundParameterMap__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundParameterMap__Class>(type_info(), "", "GameplaySoundParameterMap");
        }
        inline app::GameplaySoundParameterMap* create() {
            return il2cpp::create_object<app::GameplaySoundParameterMap>(get_class());
        }
    } // namespace GameplaySoundParameterMap
} // namespace app::classes::types
