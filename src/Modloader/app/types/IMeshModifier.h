#pragma once
#include <Modloader/app/structs/IMeshModifier.h>
#include <Modloader/app/structs/IMeshModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMeshModifier {
        inline app::IMeshModifier__Class** type_info() {
            static app::IMeshModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMeshModifier__Class**)(modloader::win::memory::resolve_rva(0x0476CB08));
            }
            return cache;
        }
        inline app::IMeshModifier__Class* get_class() {
            return il2cpp::get_class<app::IMeshModifier__Class>(type_info(), "UnityEngine.UI", "IMeshModifier");
        }
    } // namespace IMeshModifier
} // namespace app::classes::types
