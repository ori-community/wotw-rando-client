#pragma once
#include <Modloader/app/structs/Ambience_Layer.h>
#include <Modloader/app/structs/Ambience_Layer__Array.h>
#include <Modloader/app/structs/Ambience_Layer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer {
        inline app::Ambience_Layer__Class** type_info() {
            static app::Ambience_Layer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ambience_Layer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ambience_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Layer__Class>(type_info(), "Core", "Ambience", "Layer");
        }
        inline app::Ambience_Layer* create() {
            return il2cpp::create_object<app::Ambience_Layer>(get_class());
        }
        inline app::Ambience_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::Ambience_Layer__Array>(get_class(), size);
        }
        inline app::Ambience_Layer__Array* create_array(const std::vector<app::Ambience_Layer*>& items) {
            return il2cpp::array_new<app::Ambience_Layer__Array>(get_class(), items);
        }
    } // namespace Ambience_Layer
} // namespace app::classes::types
