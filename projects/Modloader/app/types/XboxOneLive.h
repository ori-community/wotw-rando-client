#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneLive__Class.h>
#include <Modloader/app/structs/XboxOneLive.h>

namespace app::classes::types {
    namespace XboxOneLive {
        inline app::XboxOneLive__Class** type_info = (app::XboxOneLive__Class**)(modloader::win::memory::resolve_rva(0x0471CAE8));
        inline app::XboxOneLive__Class* get_class() {
            return il2cpp::get_class<app::XboxOneLive__Class>(type_info, "", "XboxOneLive");
        }
        inline app::XboxOneLive* create() {
            return il2cpp::create_object<app::XboxOneLive>(get_class());
        }
    } // namespace XboxOneLive
} // namespace app::classes::types
