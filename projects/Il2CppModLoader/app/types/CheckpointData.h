#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CheckpointData {
        inline app::CheckpointData__Class** type_info = (app::CheckpointData__Class**)(modloader::win::memory::resolve_rva(0x04789C90));
        inline app::CheckpointData__Class* get_class() {
            return il2cpp::get_class<app::CheckpointData__Class>(type_info, "", "CheckpointData");
        }
        inline app::CheckpointData* create() {
            return il2cpp::create_object<app::CheckpointData>(get_class());
        }
        inline app::CheckpointData__Array* create_array(int size) {
            return il2cpp::array_new<app::CheckpointData__Array>(get_class(), size);
        }
        inline app::CheckpointData__Array* create_array(const std::vector<app::CheckpointData*>& items) {
            return il2cpp::array_new<app::CheckpointData__Array>(get_class(), items);
        }
    } // namespace CheckpointData
} // namespace app::classes::types
