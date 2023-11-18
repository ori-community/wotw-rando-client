#pragma once
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/IDialogNode__Array.h>
#include <Modloader/app/structs/IDialogNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogNode {
        inline app::IDialogNode__Class** type_info() {
            static app::IDialogNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDialogNode__Class**)(modloader::win::memory::resolve_rva(0x04792B90));
            }
            return cache;
        }
        inline app::IDialogNode__Class* get_class() {
            return il2cpp::get_class<app::IDialogNode__Class>(type_info(), "", "IDialogNode");
        }
        inline app::IDialogNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogNode__Array>(get_class(), size);
        }
        inline app::IDialogNode__Array* create_array(const std::vector<app::IDialogNode*>& items) {
            return il2cpp::array_new<app::IDialogNode__Array>(get_class(), items);
        }
    } // namespace IDialogNode
} // namespace app::classes::types
