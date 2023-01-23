#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StackGuard_1__Class.h>
#include <Modloader/app/structs/StackGuard_1.h>

namespace app::classes::types {
    namespace StackGuard_1 {
        inline app::StackGuard_1__Class** type_info = (app::StackGuard_1__Class**)(modloader::win::memory::resolve_rva(0x047880B0));
        inline app::StackGuard_1__Class* get_class() {
            return il2cpp::get_class<app::StackGuard_1__Class>(type_info, "System.Linq.Expressions", "StackGuard");
        }
        inline app::StackGuard_1* create() {
            return il2cpp::create_object<app::StackGuard_1>(get_class());
        }
    } // namespace StackGuard_1
} // namespace app::classes::types
