#pragma once
#include <Modloader/app/structs/ReplaySetting_GoToSceneRoutine_d_37.h>
#include <Modloader/app/structs/ReplaySetting_GoToSceneRoutine_d_37__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplaySetting_GoToSceneRoutine_d_37 {
        inline app::ReplaySetting_GoToSceneRoutine_d_37__Class** type_info() {
            static app::ReplaySetting_GoToSceneRoutine_d_37__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplaySetting_GoToSceneRoutine_d_37__Class**)(modloader::win::memory::resolve_rva(0x04724A10));
            }
            return cache;
        }
        inline app::ReplaySetting_GoToSceneRoutine_d_37__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplaySetting_GoToSceneRoutine_d_37__Class>(type_info(), "", "ReplaySetting", "<GoToSceneRoutine>d__37");
        }
        inline app::ReplaySetting_GoToSceneRoutine_d_37* create() {
            return il2cpp::create_object<app::ReplaySetting_GoToSceneRoutine_d_37>(get_class());
        }
    } // namespace ReplaySetting_GoToSceneRoutine_d_37
} // namespace app::classes::types
