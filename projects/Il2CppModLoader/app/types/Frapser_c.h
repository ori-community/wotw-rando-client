#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Frapser_c {
        inline app::Frapser_c__Class** type_info = (app::Frapser_c__Class**)(modloader::win::memory::resolve_rva(0x04764FA8));
        inline app::Frapser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Frapser_c__Class>(type_info, "", "Frapser", "<>c");
        }
        inline app::Frapser_c* create() {
            return il2cpp::create_object<app::Frapser_c>(get_class());
        }
    } // namespace Frapser_c
} // namespace app::classes::types
