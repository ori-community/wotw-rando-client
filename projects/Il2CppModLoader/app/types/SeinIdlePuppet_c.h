#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinIdlePuppet_c {
        inline app::SeinIdlePuppet_c__Class** type_info = (app::SeinIdlePuppet_c__Class**)(modloader::win::memory::resolve_rva(0x04717E50));
        inline app::SeinIdlePuppet_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinIdlePuppet_c__Class>(type_info, "", "SeinIdlePuppet", "<>c");
        }
        inline app::SeinIdlePuppet_c* create() {
            return il2cpp::create_object<app::SeinIdlePuppet_c>(get_class());
        }
    } // namespace SeinIdlePuppet_c
} // namespace app::classes::types
