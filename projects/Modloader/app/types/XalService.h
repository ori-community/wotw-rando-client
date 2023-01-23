#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalService__Class.h>
#include <Modloader/app/structs/XalService.h>

namespace app::classes::types {
    namespace XalService {
        inline app::XalService__Class** type_info = (app::XalService__Class**)(modloader::win::memory::resolve_rva(0x0476D500));
        inline app::XalService__Class* get_class() {
            return il2cpp::get_class<app::XalService__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService");
        }
        inline app::XalService* create() {
            return il2cpp::create_object<app::XalService>(get_class());
        }
    } // namespace XalService
} // namespace app::classes::types
