#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinController__Class.h>
#include <Modloader/app/structs/SeinController.h>

namespace app::classes::types {
    namespace SeinController {
        inline app::SeinController__Class** type_info = (app::SeinController__Class**)(modloader::win::memory::resolve_rva(0x04731AC0));
        inline app::SeinController__Class* get_class() {
            return il2cpp::get_class<app::SeinController__Class>(type_info, "", "SeinController");
        }
        inline app::SeinController* create() {
            return il2cpp::create_object<app::SeinController>(get_class());
        }
    } // namespace SeinController
} // namespace app::classes::types
