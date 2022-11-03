#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheckpointRestrictZone {
        inline app::CheckpointRestrictZone__Class** type_info = (app::CheckpointRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04734760));
        inline app::CheckpointRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::CheckpointRestrictZone__Class>(type_info, "", "CheckpointRestrictZone");
        }
        inline app::CheckpointRestrictZone* create() {
            return il2cpp::create_object<app::CheckpointRestrictZone>(get_class());
        }
        inline app::CheckpointRestrictZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CheckpointRestrictZone__Array>(get_class(), size);
        }
        inline app::CheckpointRestrictZone__Array* create_array(const std::vector<app::CheckpointRestrictZone*>& items) {
            return il2cpp::array_new<app::CheckpointRestrictZone__Array>(get_class(), items);
        }
    } // namespace CheckpointRestrictZone
} // namespace app::classes::types
