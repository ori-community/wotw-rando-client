#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Console_InternalCancelHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Console_InternalCancelHandler__Class** type_info;
        inline app::Console_InternalCancelHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_InternalCancelHandler__Class>(type_info, "System", "Console", "InternalCancelHandler");
        }
        inline app::Console_InternalCancelHandler* create() {
            return il2cpp::create_object<app::Console_InternalCancelHandler>(get_class());
        }
    } // namespace Console_InternalCancelHandler
} // namespace app::classes::types
