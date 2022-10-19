#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatterConverter {
        inline app::FormatterConverter__Class** type_info = (app::FormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0477C3A8));
        inline app::FormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::FormatterConverter__Class>(type_info, "System.Runtime.Serialization", "FormatterConverter");
        }
        inline app::FormatterConverter* create() {
            return il2cpp::create_object<app::FormatterConverter>(get_class());
        }
    } // namespace FormatterConverter
} // namespace app::classes::types
