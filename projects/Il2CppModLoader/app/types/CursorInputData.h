#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorInputData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CursorInputData__Class** type_info;
        inline app::CursorInputData__Class* get_class() {
            return il2cpp::get_class<app::CursorInputData__Class>(type_info, "", "CursorInputData");
        }
        inline app::CursorInputData* create() {
            return il2cpp::create_object<app::CursorInputData>(get_class());
        }
    } // namespace CursorInputData
} // namespace app::classes::types
