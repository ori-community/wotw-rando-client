#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancellationToken__Array {
        inline app::CancellationToken__Array__Class** type_info = (app::CancellationToken__Array__Class**)(modloader::win::memory::resolve_rva(0x04786990));
        inline app::CancellationToken__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationToken__Array__Class>(type_info, "System.Threading", "CancellationToken[]");
        }
        inline app::CancellationToken__Array* create() {
            return il2cpp::create_object<app::CancellationToken__Array>(get_class());
        }
    } // namespace CancellationToken__Array
} // namespace app::classes::types
