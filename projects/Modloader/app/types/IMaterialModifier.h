#pragma once
#include <Modloader/app/structs/IMaterialModifier.h>
#include <Modloader/app/structs/IMaterialModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMaterialModifier {
        inline app::IMaterialModifier__Class** type_info() {
            static app::IMaterialModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMaterialModifier__Class**)(modloader::win::memory::resolve_rva(0x047981E0));
            }
            return cache;
        }
        inline app::IMaterialModifier__Class* get_class() {
            return il2cpp::get_class<app::IMaterialModifier__Class>(type_info(), "UnityEngine.UI", "IMaterialModifier");
        }
    } // namespace IMaterialModifier
} // namespace app::classes::types
