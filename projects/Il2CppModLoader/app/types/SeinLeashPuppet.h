#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLeashPuppet {
        inline app::SeinLeashPuppet__Class** type_info = (app::SeinLeashPuppet__Class**)(modloader::win::memory::resolve_rva(0x0478D9D0));
        inline app::SeinLeashPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinLeashPuppet__Class>(type_info, "", "SeinLeashPuppet");
        }
        inline app::SeinLeashPuppet* create() {
            return il2cpp::create_object<app::SeinLeashPuppet>(get_class());
        }
    } // namespace SeinLeashPuppet
} // namespace app::classes::types
