#pragma once
#include <Modloader/app/structs/Music_Layer.h>
#include <Modloader/app/structs/Music_Layer__Array.h>
#include <Modloader/app/structs/Music_Layer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Music_Layer {
        inline app::Music_Layer__Class** type_info() {
            static app::Music_Layer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Music_Layer__Class**)(modloader::win::memory::resolve_rva(0x0476A930));
            }
            return cache;
        }
        inline app::Music_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::Music_Layer__Class>(type_info(), "Core", "Music", "Layer");
        }
        inline app::Music_Layer* create() {
            return il2cpp::create_object<app::Music_Layer>(get_class());
        }
        inline app::Music_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::Music_Layer__Array>(get_class(), size);
        }
        inline app::Music_Layer__Array* create_array(const std::vector<app::Music_Layer*>& items) {
            return il2cpp::array_new<app::Music_Layer__Array>(get_class(), items);
        }
    } // namespace Music_Layer
} // namespace app::classes::types
