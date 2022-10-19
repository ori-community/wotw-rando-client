#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEventSystem_c {
        inline app::WwiseEventSystem_c__Class** type_info = (app::WwiseEventSystem_c__Class**)(modloader::win::memory::resolve_rva(0x04736B80));
        inline app::WwiseEventSystem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_c__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "<>c");
        }
        inline app::WwiseEventSystem_c* create() {
            return il2cpp::create_object<app::WwiseEventSystem_c>(get_class());
        }
    } // namespace WwiseEventSystem_c
} // namespace app::classes::types
