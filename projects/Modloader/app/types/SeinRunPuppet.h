#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinRunPuppet__Class.h>
#include <Modloader/app/structs/SeinRunPuppet.h>

namespace app::classes::types {
    namespace SeinRunPuppet {
        inline app::SeinRunPuppet__Class** type_info = (app::SeinRunPuppet__Class**)(modloader::win::memory::resolve_rva(0x0471CEE8));
        inline app::SeinRunPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRunPuppet__Class>(type_info, "", "SeinRunPuppet");
        }
        inline app::SeinRunPuppet* create() {
            return il2cpp::create_object<app::SeinRunPuppet>(get_class());
        }
    } // namespace SeinRunPuppet
} // namespace app::classes::types
