#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WWWTranscoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WWWTranscoder__Class** type_info;
        inline app::WWWTranscoder__Class* get_class() {
            return il2cpp::get_class<app::WWWTranscoder__Class>(type_info, "UnityEngine", "WWWTranscoder");
        }
        inline app::WWWTranscoder* create() {
            return il2cpp::create_object<app::WWWTranscoder>(get_class());
        }
    } // namespace WWWTranscoder
} // namespace app::classes::types
