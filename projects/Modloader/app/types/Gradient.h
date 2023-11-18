#pragma once
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/Gradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Gradient {
        inline app::Gradient__Class** type_info() {
            static app::Gradient__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Gradient__Class**)(modloader::win::memory::resolve_rva(0x047568C0));
            }
            return cache;
        }
        inline app::Gradient__Class* get_class() {
            return il2cpp::get_class<app::Gradient__Class>(type_info(), "UnityEngine", "Gradient");
        }
        inline app::Gradient* create() {
            return il2cpp::create_object<app::Gradient>(get_class());
        }
    } // namespace Gradient
} // namespace app::classes::types
