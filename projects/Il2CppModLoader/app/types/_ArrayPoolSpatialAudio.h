#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolSpatialAudio {
        namespace {
            app::_ArrayPoolSpatialAudio__Class* type_info_ref = nullptr;
        }
        app::_ArrayPoolSpatialAudio__Class** type_info = &type_info_ref;
        inline app::_ArrayPoolSpatialAudio__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolSpatialAudio__Class>(type_info, "", "_ArrayPoolSpatialAudio");
        }
        inline app::_ArrayPoolSpatialAudio* create() {
            return il2cpp::create_object<app::_ArrayPoolSpatialAudio>(get_class());
        }
    } // namespace _ArrayPoolSpatialAudio
} // namespace app::classes::types
