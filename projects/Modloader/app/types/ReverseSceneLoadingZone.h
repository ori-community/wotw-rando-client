#pragma once
#include <Modloader/app/structs/ReverseSceneLoadingZone.h>
#include <Modloader/app/structs/ReverseSceneLoadingZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReverseSceneLoadingZone {
        inline app::ReverseSceneLoadingZone__Class** type_info() {
            static app::ReverseSceneLoadingZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReverseSceneLoadingZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReverseSceneLoadingZone__Class* get_class() {
            return il2cpp::get_class<app::ReverseSceneLoadingZone__Class>(type_info(), "", "ReverseSceneLoadingZone");
        }
        inline app::ReverseSceneLoadingZone* create() {
            return il2cpp::create_object<app::ReverseSceneLoadingZone>(get_class());
        }
    } // namespace ReverseSceneLoadingZone
} // namespace app::classes::types
