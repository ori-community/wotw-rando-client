#pragma once
#include <Modloader/app/structs/GraphicsFormatUtility.h>
#include <Modloader/app/structs/GraphicsFormatUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsFormatUtility {
        inline app::GraphicsFormatUtility__Class** type_info() {
            static app::GraphicsFormatUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GraphicsFormatUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GraphicsFormatUtility__Class* get_class() {
            return il2cpp::get_class<app::GraphicsFormatUtility__Class>(type_info(), "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
        }
        inline app::GraphicsFormatUtility* create() {
            return il2cpp::create_object<app::GraphicsFormatUtility>(get_class());
        }
    } // namespace GraphicsFormatUtility
} // namespace app::classes::types
