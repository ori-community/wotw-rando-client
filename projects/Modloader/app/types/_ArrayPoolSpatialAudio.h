#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_ArrayPoolSpatialAudio__Class.h>
#include <Modloader/app/structs/_ArrayPoolSpatialAudio.h>

namespace app::classes::types {
    namespace _ArrayPoolSpatialAudio {
        namespace {
            inline app::_ArrayPoolSpatialAudio__Class* type_info_ref = nullptr;
        }
        inline app::_ArrayPoolSpatialAudio__Class** type_info = &type_info_ref;
        inline app::_ArrayPoolSpatialAudio__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolSpatialAudio__Class>(type_info, "", "_ArrayPoolSpatialAudio");
        }
        inline app::_ArrayPoolSpatialAudio* create() {
            return il2cpp::create_object<app::_ArrayPoolSpatialAudio>(get_class());
        }
    } // namespace _ArrayPoolSpatialAudio
} // namespace app::classes::types
