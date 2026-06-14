#pragma once
#include <Modloader/app/structs/LightCanvas.h>
#include <Modloader/app/structs/LightCanvas__Array.h>
#include <Modloader/app/structs/LightCanvas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas {
        inline app::LightCanvas__Class** type_info() {
            static app::LightCanvas__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCanvas__Class**)(modloader::win::memory::resolve_rva(0x0470B2A0));
            }
            return cache;
        }
        inline app::LightCanvas__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas__Class>(type_info(), "", "LightCanvas");
        }
        inline app::LightCanvas* create() {
            return il2cpp::create_object<app::LightCanvas>(get_class());
        }
        inline app::LightCanvas__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvas__Array>(get_class(), size);
        }
        inline app::LightCanvas__Array* create_array(const std::vector<app::LightCanvas*>& items) {
            return il2cpp::array_new<app::LightCanvas__Array>(get_class(), items);
        }
    } // namespace LightCanvas
} // namespace app::classes::types
