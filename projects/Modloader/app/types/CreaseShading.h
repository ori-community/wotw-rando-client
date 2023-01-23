#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreaseShading__Class.h>
#include <Modloader/app/structs/CreaseShading.h>

namespace app::classes::types {
    namespace CreaseShading {
        namespace {
            inline app::CreaseShading__Class* type_info_ref = nullptr;
        }
        inline app::CreaseShading__Class** type_info = &type_info_ref;
        inline app::CreaseShading__Class* get_class() {
            return il2cpp::get_class<app::CreaseShading__Class>(type_info, "UnityStandardAssets.ImageEffects", "CreaseShading");
        }
        inline app::CreaseShading* create() {
            return il2cpp::create_object<app::CreaseShading>(get_class());
        }
    } // namespace CreaseShading
} // namespace app::classes::types
