#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidateNames__Class.h>
#include <Modloader/app/structs/ValidateNames.h>

namespace app::classes::types {
    namespace ValidateNames {
        inline app::ValidateNames__Class** type_info = (app::ValidateNames__Class**)(modloader::win::memory::resolve_rva(0x047099C8));
        inline app::ValidateNames__Class* get_class() {
            return il2cpp::get_class<app::ValidateNames__Class>(type_info, "System.Xml", "ValidateNames");
        }
        inline app::ValidateNames* create() {
            return il2cpp::create_object<app::ValidateNames>(get_class());
        }
    } // namespace ValidateNames
} // namespace app::classes::types
