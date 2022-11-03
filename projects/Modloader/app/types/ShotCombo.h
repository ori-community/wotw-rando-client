#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShotCombo {
        inline app::ShotCombo__Class** type_info = (app::ShotCombo__Class**)(modloader::win::memory::resolve_rva(0x04786898));
        inline app::ShotCombo__Class* get_class() {
            return il2cpp::get_class<app::ShotCombo__Class>(type_info, "", "ShotCombo");
        }
        inline app::ShotCombo* create() {
            return il2cpp::create_object<app::ShotCombo>(get_class());
        }
    } // namespace ShotCombo
} // namespace app::classes::types
