#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinIdlePuppet__Class.h>
#include <Modloader/app/structs/SeinIdlePuppet.h>

namespace app::classes::types {
    namespace SeinIdlePuppet {
        inline app::SeinIdlePuppet__Class** type_info = (app::SeinIdlePuppet__Class**)(modloader::win::memory::resolve_rva(0x04720B18));
        inline app::SeinIdlePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinIdlePuppet__Class>(type_info, "", "SeinIdlePuppet");
        }
        inline app::SeinIdlePuppet* create() {
            return il2cpp::create_object<app::SeinIdlePuppet>(get_class());
        }
    } // namespace SeinIdlePuppet
} // namespace app::classes::types
