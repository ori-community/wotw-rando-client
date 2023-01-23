#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinClamberPuppet__Class.h>
#include <Modloader/app/structs/SeinClamberPuppet.h>

namespace app::classes::types {
    namespace SeinClamberPuppet {
        inline app::SeinClamberPuppet__Class** type_info = (app::SeinClamberPuppet__Class**)(modloader::win::memory::resolve_rva(0x04726498));
        inline app::SeinClamberPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinClamberPuppet__Class>(type_info, "", "SeinClamberPuppet");
        }
        inline app::SeinClamberPuppet* create() {
            return il2cpp::create_object<app::SeinClamberPuppet>(get_class());
        }
    } // namespace SeinClamberPuppet
} // namespace app::classes::types
