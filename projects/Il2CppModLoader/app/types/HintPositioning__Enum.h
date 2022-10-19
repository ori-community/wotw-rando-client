#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HintPositioning__Enum {
        inline app::HintPositioning__Enum__Class** type_info = (app::HintPositioning__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475BF18));
        inline app::HintPositioning__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintPositioning__Enum__Class>(type_info, "", "HintPositioning");
        }
        inline app::HintPositioning__Enum* create() {
            return il2cpp::create_object<app::HintPositioning__Enum>(get_class());
        }
    } // namespace HintPositioning__Enum
} // namespace app::classes::types
