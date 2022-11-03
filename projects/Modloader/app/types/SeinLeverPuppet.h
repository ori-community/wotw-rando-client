#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLeverPuppet {
        inline app::SeinLeverPuppet__Class** type_info = (app::SeinLeverPuppet__Class**)(modloader::win::memory::resolve_rva(0x04735F20));
        inline app::SeinLeverPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinLeverPuppet__Class>(type_info, "", "SeinLeverPuppet");
        }
        inline app::SeinLeverPuppet* create() {
            return il2cpp::create_object<app::SeinLeverPuppet>(get_class());
        }
    } // namespace SeinLeverPuppet
} // namespace app::classes::types
