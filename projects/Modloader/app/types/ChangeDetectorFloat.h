#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeDetectorFloat {
        inline app::ChangeDetectorFloat__Class** type_info = (app::ChangeDetectorFloat__Class**)(modloader::win::memory::resolve_rva(0x04744858));
        inline app::ChangeDetectorFloat__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorFloat__Class>(type_info, "", "ChangeDetectorFloat");
        }
        inline app::ChangeDetectorFloat* create() {
            return il2cpp::create_object<app::ChangeDetectorFloat>(get_class());
        }
    } // namespace ChangeDetectorFloat
} // namespace app::classes::types
