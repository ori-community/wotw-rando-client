#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WWW__Class.h>
#include <Modloader/app/structs/WWW.h>

namespace app::classes::types {
    namespace WWW {
        inline app::WWW__Class** type_info = (app::WWW__Class**)(modloader::win::memory::resolve_rva(0x04761AC0));
        inline app::WWW__Class* get_class() {
            return il2cpp::get_class<app::WWW__Class>(type_info, "UnityEngine", "WWW");
        }
        inline app::WWW* create() {
            return il2cpp::create_object<app::WWW>(get_class());
        }
    } // namespace WWW
} // namespace app::classes::types
