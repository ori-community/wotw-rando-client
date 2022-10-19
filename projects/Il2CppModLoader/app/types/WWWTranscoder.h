#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WWWTranscoder {
        inline app::WWWTranscoder__Class** type_info = (app::WWWTranscoder__Class**)(modloader::win::memory::resolve_rva(0x04715658));
        inline app::WWWTranscoder__Class* get_class() {
            return il2cpp::get_class<app::WWWTranscoder__Class>(type_info, "UnityEngine", "WWWTranscoder");
        }
        inline app::WWWTranscoder* create() {
            return il2cpp::create_object<app::WWWTranscoder>(get_class());
        }
    } // namespace WWWTranscoder
} // namespace app::classes::types
