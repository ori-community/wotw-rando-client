#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBashAttack {
        inline app::SeinBashAttack__Class** type_info = (app::SeinBashAttack__Class**)(modloader::win::memory::resolve_rva(0x04781EE0));
        inline app::SeinBashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBashAttack__Class>(type_info, "", "SeinBashAttack");
        }
        inline app::SeinBashAttack* create() {
            return il2cpp::create_object<app::SeinBashAttack>(get_class());
        }
    } // namespace SeinBashAttack
} // namespace app::classes::types
