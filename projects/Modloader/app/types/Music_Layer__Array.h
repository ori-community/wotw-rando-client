#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Music_Layer__Array {
        namespace {
            inline app::Music_Layer__Array__Class* type_info_ref = nullptr;
        }
        inline app::Music_Layer__Array__Class** type_info = &type_info_ref;
        inline app::Music_Layer__Array__Class* get_class() {
            return il2cpp::get_class<app::Music_Layer__Array__Class>(type_info, "Core", "Music+Layer[]");
        }
        inline app::Music_Layer__Array* create() {
            return il2cpp::create_object<app::Music_Layer__Array>(get_class());
        }
    } // namespace Music_Layer__Array
} // namespace app::classes::types
