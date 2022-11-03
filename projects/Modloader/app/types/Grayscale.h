#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grayscale {
        namespace {
            inline app::Grayscale__Class* type_info_ref = nullptr;
        }
        inline app::Grayscale__Class** type_info = &type_info_ref;
        inline app::Grayscale__Class* get_class() {
            return il2cpp::get_class<app::Grayscale__Class>(type_info, "Colorful", "Grayscale");
        }
        inline app::Grayscale* create() {
            return il2cpp::create_object<app::Grayscale>(get_class());
        }
    } // namespace Grayscale
} // namespace app::classes::types
