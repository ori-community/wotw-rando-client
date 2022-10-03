#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodePointIndexer_TableRange__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CodePointIndexer_TableRange__Array__Class** type_info;
        inline app::CodePointIndexer_TableRange__Array__Class* get_class() {
            return il2cpp::get_class<app::CodePointIndexer_TableRange__Array__Class>(type_info, "Mono.Globalization.Unicode", "CodePointIndexer+TableRange[]");
        }
        inline app::CodePointIndexer_TableRange__Array* create() {
            return il2cpp::create_object<app::CodePointIndexer_TableRange__Array>(get_class());
        }
    } // namespace CodePointIndexer_TableRange__Array
} // namespace app::classes::types
