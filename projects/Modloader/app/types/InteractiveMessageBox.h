#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractiveMessageBox__Class.h>
#include <Modloader/app/structs/InteractiveMessageBox.h>

namespace app::classes::types {
    namespace InteractiveMessageBox {
        inline app::InteractiveMessageBox__Class** type_info = (app::InteractiveMessageBox__Class**)(modloader::win::memory::resolve_rva(0x04726F10));
        inline app::InteractiveMessageBox__Class* get_class() {
            return il2cpp::get_class<app::InteractiveMessageBox__Class>(type_info, "", "InteractiveMessageBox");
        }
        inline app::InteractiveMessageBox* create() {
            return il2cpp::create_object<app::InteractiveMessageBox>(get_class());
        }
    } // namespace InteractiveMessageBox
} // namespace app::classes::types
