#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TorchComboMoveAdapter {
        inline app::TorchComboMoveAdapter__Class** type_info = (app::TorchComboMoveAdapter__Class**)(modloader::win::memory::resolve_rva(0x04713670));
        inline app::TorchComboMoveAdapter__Class* get_class() {
            return il2cpp::get_class<app::TorchComboMoveAdapter__Class>(type_info, "Moon.ComboSystem", "TorchComboMoveAdapter");
        }
        inline app::TorchComboMoveAdapter* create() {
            return il2cpp::create_object<app::TorchComboMoveAdapter>(get_class());
        }
        inline app::TorchComboMoveAdapter__Array* create_array(int size) {
            return il2cpp::array_new<app::TorchComboMoveAdapter__Array>(get_class(), size);
        }
        inline app::TorchComboMoveAdapter__Array* create_array(const std::vector<app::TorchComboMoveAdapter*>& items) {
            return il2cpp::array_new<app::TorchComboMoveAdapter__Array>(get_class(), items);
        }
    } // namespace TorchComboMoveAdapter
} // namespace app::classes::types
