#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderIdle_c {
        inline app::BuilderIdle_c__Class** type_info = (app::BuilderIdle_c__Class**)(modloader::win::memory::resolve_rva(0x04792FD0));
        inline app::BuilderIdle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderIdle_c__Class>(type_info, "", "BuilderIdle", "<>c");
        }
        inline app::BuilderIdle_c* create() {
            return il2cpp::create_object<app::BuilderIdle_c>(get_class());
        }
    } // namespace BuilderIdle_c
} // namespace app::classes::types
