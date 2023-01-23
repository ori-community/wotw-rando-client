#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NoNullAllowedException__Class.h>
#include <Modloader/app/structs/NoNullAllowedException.h>

namespace app::classes::types {
    namespace NoNullAllowedException {
        inline app::NoNullAllowedException__Class** type_info = (app::NoNullAllowedException__Class**)(modloader::win::memory::resolve_rva(0x047945A8));
        inline app::NoNullAllowedException__Class* get_class() {
            return il2cpp::get_class<app::NoNullAllowedException__Class>(type_info, "System.Data", "NoNullAllowedException");
        }
        inline app::NoNullAllowedException* create() {
            return il2cpp::create_object<app::NoNullAllowedException>(get_class());
        }
    } // namespace NoNullAllowedException
} // namespace app::classes::types
