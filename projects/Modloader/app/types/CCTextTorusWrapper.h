#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCTextTorusWrapper__Class.h>
#include <Modloader/app/structs/CCTextTorusWrapper.h>

namespace app::classes::types {
    namespace CCTextTorusWrapper {
        inline app::CCTextTorusWrapper__Class** type_info = (app::CCTextTorusWrapper__Class**)(modloader::win::memory::resolve_rva(0x0476B2B0));
        inline app::CCTextTorusWrapper__Class* get_class() {
            return il2cpp::get_class<app::CCTextTorusWrapper__Class>(type_info, "", "CCTextTorusWrapper");
        }
        inline app::CCTextTorusWrapper* create() {
            return il2cpp::create_object<app::CCTextTorusWrapper>(get_class());
        }
    } // namespace CCTextTorusWrapper
} // namespace app::classes::types
