#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GC_1 {
        inline app::GC_1__Class** type_info = (app::GC_1__Class**)(modloader::win::memory::resolve_rva(0x0474D440));
        inline app::GC_1__Class* get_class() {
            return il2cpp::get_class<app::GC_1__Class>(type_info, "System", "GC");
        }
        inline app::GC_1* create() {
            return il2cpp::create_object<app::GC_1>(get_class());
        }
    } // namespace GC_1
} // namespace app::classes::types
