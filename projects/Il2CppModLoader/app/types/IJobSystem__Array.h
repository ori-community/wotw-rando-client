#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IJobSystem__Array {
        inline app::IJobSystem__Array__Class** type_info = (app::IJobSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C18));
        inline app::IJobSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::IJobSystem__Array__Class>(type_info, "Moon.Jobs", "IJobSystem[]");
        }
        inline app::IJobSystem__Array* create() {
            return il2cpp::create_object<app::IJobSystem__Array>(get_class());
        }
    } // namespace IJobSystem__Array
} // namespace app::classes::types
