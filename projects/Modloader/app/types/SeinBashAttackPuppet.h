#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBashAttackPuppet__Class.h>
#include <Modloader/app/structs/SeinBashAttackPuppet.h>

namespace app::classes::types {
    namespace SeinBashAttackPuppet {
        inline app::SeinBashAttackPuppet__Class** type_info = (app::SeinBashAttackPuppet__Class**)(modloader::win::memory::resolve_rva(0x0470DE20));
        inline app::SeinBashAttackPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinBashAttackPuppet__Class>(type_info, "", "SeinBashAttackPuppet");
        }
        inline app::SeinBashAttackPuppet* create() {
            return il2cpp::create_object<app::SeinBashAttackPuppet>(get_class());
        }
    } // namespace SeinBashAttackPuppet
} // namespace app::classes::types
