#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Utility__Class.h>
#include <Modloader/app/structs/Utility.h>

namespace app::classes::types {
    namespace Utility {
        inline app::Utility__Class** type_info = (app::Utility__Class**)(modloader::win::memory::resolve_rva(0x04747830));
        inline app::Utility__Class* get_class() {
            return il2cpp::get_class<app::Utility__Class>(type_info, "", "Utility");
        }
        inline app::Utility* create() {
            return il2cpp::create_object<app::Utility>(get_class());
        }
    } // namespace Utility
} // namespace app::classes::types
