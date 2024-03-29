#pragma once
#include <Modloader/app/structs/InteractiveMessageBox.h>
#include <Modloader/app/structs/InteractiveMessageBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractiveMessageBox {
        inline app::InteractiveMessageBox__Class** type_info() {
            static app::InteractiveMessageBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractiveMessageBox__Class**)(modloader::win::memory::resolve_rva(0x04726F10));
            }
            return cache;
        }
        inline app::InteractiveMessageBox__Class* get_class() {
            return il2cpp::get_class<app::InteractiveMessageBox__Class>(type_info(), "", "InteractiveMessageBox");
        }
        inline app::InteractiveMessageBox* create() {
            return il2cpp::create_object<app::InteractiveMessageBox>(get_class());
        }
    } // namespace InteractiveMessageBox
} // namespace app::classes::types
