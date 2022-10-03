#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionEntry__Class** type_info;
        inline app::ExceptionEntry__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEntry__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionEntry");
        }
        inline app::ExceptionEntry* create() {
            return il2cpp::create_object<app::ExceptionEntry>(get_class());
        }
        inline app::ExceptionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionEntry__Array>(get_class(), size);
        }
    } // namespace ExceptionEntry
} // namespace app::classes::types
