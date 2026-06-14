#pragma once
#include <Modloader/app/structs/Graphics.h>
#include <Modloader/app/structs/Graphics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Graphics {
        inline app::Graphics__Class** type_info() {
            static app::Graphics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Graphics__Class**)(modloader::win::memory::resolve_rva(0x04761928));
            }
            return cache;
        }
        inline app::Graphics__Class* get_class() {
            return il2cpp::get_class<app::Graphics__Class>(type_info(), "UnityEngine", "Graphics");
        }
        inline app::Graphics* create() {
            return il2cpp::create_object<app::Graphics>(get_class());
        }
    } // namespace Graphics
} // namespace app::classes::types
