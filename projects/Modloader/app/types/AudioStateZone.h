#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioStateZone {
        inline app::AudioStateZone__Class** type_info = (app::AudioStateZone__Class**)(modloader::win::memory::resolve_rva(0x04721C88));
        inline app::AudioStateZone__Class* get_class() {
            return il2cpp::get_class<app::AudioStateZone__Class>(type_info, "", "AudioStateZone");
        }
        inline app::AudioStateZone* create() {
            return il2cpp::create_object<app::AudioStateZone>(get_class());
        }
        inline app::AudioStateZone__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioStateZone__Array>(get_class(), size);
        }
        inline app::AudioStateZone__Array* create_array(const std::vector<app::AudioStateZone*>& items) {
            return il2cpp::array_new<app::AudioStateZone__Array>(get_class(), items);
        }
    } // namespace AudioStateZone
} // namespace app::classes::types
