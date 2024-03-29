#pragma once
#include <Modloader/app/structs/Ambience_Layer_Track.h>
#include <Modloader/app/structs/Ambience_Layer_Track__Array.h>
#include <Modloader/app/structs/Ambience_Layer_Track__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer_Track {
        inline app::Ambience_Layer_Track__Class** type_info() {
            static app::Ambience_Layer_Track__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ambience_Layer_Track__Class**)(modloader::win::memory::resolve_rva(0x04742C40));
            }
            return cache;
        }
        inline app::Ambience_Layer_Track__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Layer_Track__Class>(type_info(), "Core", "Ambience+Layer", "Track");
        }
        inline app::Ambience_Layer_Track* create() {
            return il2cpp::create_object<app::Ambience_Layer_Track>(get_class());
        }
        inline app::Ambience_Layer_Track__Array* create_array(int size) {
            return il2cpp::array_new<app::Ambience_Layer_Track__Array>(get_class(), size);
        }
        inline app::Ambience_Layer_Track__Array* create_array(const std::vector<app::Ambience_Layer_Track*>& items) {
            return il2cpp::array_new<app::Ambience_Layer_Track__Array>(get_class(), items);
        }
    } // namespace Ambience_Layer_Track
} // namespace app::classes::types
