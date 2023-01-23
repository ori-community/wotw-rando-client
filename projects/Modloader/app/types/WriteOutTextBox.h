#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteOutTextBox__Class.h>
#include <Modloader/app/structs/WriteOutTextBox.h>

namespace app::classes::types {
    namespace WriteOutTextBox {
        namespace {
            inline app::WriteOutTextBox__Class* type_info_ref = nullptr;
        }
        inline app::WriteOutTextBox__Class** type_info = &type_info_ref;
        inline app::WriteOutTextBox__Class* get_class() {
            return il2cpp::get_class<app::WriteOutTextBox__Class>(type_info, "", "WriteOutTextBox");
        }
        inline app::WriteOutTextBox* create() {
            return il2cpp::create_object<app::WriteOutTextBox>(get_class());
        }
    } // namespace WriteOutTextBox
} // namespace app::classes::types
