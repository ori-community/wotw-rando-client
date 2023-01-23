#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Music_Layer_Track__Class.h>
#include <Modloader/app/structs/Music_Layer_Track.h>
#include <Modloader/app/structs/Music_Layer_Track__Array.h>

namespace app::classes::types {
    namespace Music_Layer_Track {
        inline app::Music_Layer_Track__Class** type_info = (app::Music_Layer_Track__Class**)(modloader::win::memory::resolve_rva(0x04757AB8));
        inline app::Music_Layer_Track__Class* get_class() {
            return il2cpp::get_nested_class<app::Music_Layer_Track__Class>(type_info, "Core", "Music+Layer", "Track");
        }
        inline app::Music_Layer_Track* create() {
            return il2cpp::create_object<app::Music_Layer_Track>(get_class());
        }
        inline app::Music_Layer_Track__Array* create_array(int size) {
            return il2cpp::array_new<app::Music_Layer_Track__Array>(get_class(), size);
        }
        inline app::Music_Layer_Track__Array* create_array(const std::vector<app::Music_Layer_Track*>& items) {
            return il2cpp::array_new<app::Music_Layer_Track__Array>(get_class(), items);
        }
    } // namespace Music_Layer_Track
} // namespace app::classes::types
