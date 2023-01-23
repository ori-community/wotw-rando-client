#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUILayer__Class.h>
#include <Modloader/app/structs/GUILayer.h>

namespace app::classes::types {
    namespace GUILayer {
        namespace {
            inline app::GUILayer__Class* type_info_ref = nullptr;
        }
        inline app::GUILayer__Class** type_info = &type_info_ref;
        inline app::GUILayer__Class* get_class() {
            return il2cpp::get_class<app::GUILayer__Class>(type_info, "UnityEngine", "GUILayer");
        }
        inline app::GUILayer* create() {
            return il2cpp::create_object<app::GUILayer>(get_class());
        }
    } // namespace GUILayer
} // namespace app::classes::types
