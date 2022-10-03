#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodePointIndexer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CodePointIndexer__Class** type_info;
        inline app::CodePointIndexer__Class* get_class() {
            return il2cpp::get_class<app::CodePointIndexer__Class>(type_info, "Mono.Globalization.Unicode", "CodePointIndexer");
        }
        inline app::CodePointIndexer* create() {
            return il2cpp::create_object<app::CodePointIndexer>(get_class());
        }
    } // namespace CodePointIndexer
} // namespace app::classes::types
