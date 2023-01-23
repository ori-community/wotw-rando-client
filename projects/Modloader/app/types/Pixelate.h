#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Pixelate__Class.h>
#include <Modloader/app/structs/Pixelate.h>

namespace app::classes::types {
    namespace Pixelate {
        namespace {
            inline app::Pixelate__Class* type_info_ref = nullptr;
        }
        inline app::Pixelate__Class** type_info = &type_info_ref;
        inline app::Pixelate__Class* get_class() {
            return il2cpp::get_class<app::Pixelate__Class>(type_info, "Colorful", "Pixelate");
        }
        inline app::Pixelate* create() {
            return il2cpp::create_object<app::Pixelate>(get_class());
        }
    } // namespace Pixelate
} // namespace app::classes::types
