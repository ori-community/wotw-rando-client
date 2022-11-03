#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChromaticAberration {
        namespace {
            inline app::ChromaticAberration__Class* type_info_ref = nullptr;
        }
        inline app::ChromaticAberration__Class** type_info = &type_info_ref;
        inline app::ChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ChromaticAberration__Class>(type_info, "Colorful", "ChromaticAberration");
        }
        inline app::ChromaticAberration* create() {
            return il2cpp::create_object<app::ChromaticAberration>(get_class());
        }
    } // namespace ChromaticAberration
} // namespace app::classes::types
