#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Blend__Class.h>
#include <Modloader/app/structs/Blend.h>

namespace app::classes::types {
    namespace Blend {
        namespace {
            inline app::Blend__Class* type_info_ref = nullptr;
        }
        inline app::Blend__Class** type_info = &type_info_ref;
        inline app::Blend__Class* get_class() {
            return il2cpp::get_class<app::Blend__Class>(type_info, "Colorful", "Blend");
        }
        inline app::Blend* create() {
            return il2cpp::create_object<app::Blend>(get_class());
        }
    } // namespace Blend
} // namespace app::classes::types
