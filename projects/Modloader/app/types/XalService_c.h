#pragma once
#include <Modloader/app/structs/XalService_c.h>
#include <Modloader/app/structs/XalService_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_c {
        inline app::XalService_c__Class** type_info() {
            static app::XalService_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_c__Class**)(modloader::win::memory::resolve_rva(0x04786380));
            }
            return cache;
        }
        inline app::XalService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_c__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "<>c");
        }
        inline app::XalService_c* create() {
            return il2cpp::create_object<app::XalService_c>(get_class());
        }
    } // namespace XalService_c
} // namespace app::classes::types
