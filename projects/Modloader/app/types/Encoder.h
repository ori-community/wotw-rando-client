#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoder {
        namespace {
            inline app::Encoder__Class* type_info_ref = nullptr;
        }
        inline app::Encoder__Class** type_info = &type_info_ref;
        inline app::Encoder__Class* get_class() {
            return il2cpp::get_class<app::Encoder__Class>(type_info, "System.Text", "Encoder");
        }
        inline app::Encoder* create() {
            return il2cpp::create_object<app::Encoder>(get_class());
        }
    } // namespace Encoder
} // namespace app::classes::types
