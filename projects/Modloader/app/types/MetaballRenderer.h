#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballRenderer {
        namespace {
            inline app::MetaballRenderer__Class* type_info_ref = nullptr;
        }
        inline app::MetaballRenderer__Class** type_info = &type_info_ref;
        inline app::MetaballRenderer__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer__Class>(type_info, "Metaballs2D", "MetaballRenderer");
        }
        inline app::MetaballRenderer* create() {
            return il2cpp::create_object<app::MetaballRenderer>(get_class());
        }
    } // namespace MetaballRenderer
} // namespace app::classes::types
