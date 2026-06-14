#pragma once
#include <Modloader/app/structs/_ArrayPoolSpatialAudio.h>
#include <Modloader/app/structs/_ArrayPoolSpatialAudio__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolSpatialAudio {
        inline app::_ArrayPoolSpatialAudio__Class** type_info() {
            static app::_ArrayPoolSpatialAudio__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_ArrayPoolSpatialAudio__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_ArrayPoolSpatialAudio__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolSpatialAudio__Class>(type_info(), "", "_ArrayPoolSpatialAudio");
        }
        inline app::_ArrayPoolSpatialAudio* create() {
            return il2cpp::create_object<app::_ArrayPoolSpatialAudio>(get_class());
        }
    } // namespace _ArrayPoolSpatialAudio
} // namespace app::classes::types
