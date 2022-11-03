#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Letterbox {
        namespace {
            inline app::Letterbox__Class* type_info_ref = nullptr;
        }
        inline app::Letterbox__Class** type_info = &type_info_ref;
        inline app::Letterbox__Class* get_class() {
            return il2cpp::get_class<app::Letterbox__Class>(type_info, "Colorful", "Letterbox");
        }
        inline app::Letterbox* create() {
            return il2cpp::create_object<app::Letterbox>(get_class());
        }
    } // namespace Letterbox
} // namespace app::classes::types
