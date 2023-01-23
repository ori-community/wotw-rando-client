#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFallPuppet__Class.h>
#include <Modloader/app/structs/SeinFallPuppet.h>

namespace app::classes::types {
    namespace SeinFallPuppet {
        inline app::SeinFallPuppet__Class** type_info = (app::SeinFallPuppet__Class**)(modloader::win::memory::resolve_rva(0x047315F0));
        inline app::SeinFallPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinFallPuppet__Class>(type_info, "", "SeinFallPuppet");
        }
        inline app::SeinFallPuppet* create() {
            return il2cpp::create_object<app::SeinFallPuppet>(get_class());
        }
    } // namespace SeinFallPuppet
} // namespace app::classes::types
