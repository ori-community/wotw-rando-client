#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorInputData {
        inline app::CursorInputData__Class** type_info = (app::CursorInputData__Class**)(modloader::win::memory::resolve_rva(0x04730F08));
        inline app::CursorInputData__Class* get_class() {
            return il2cpp::get_class<app::CursorInputData__Class>(type_info, "", "CursorInputData");
        }
        inline app::CursorInputData* create() {
            return il2cpp::create_object<app::CursorInputData>(get_class());
        }
    } // namespace CursorInputData
} // namespace app::classes::types
