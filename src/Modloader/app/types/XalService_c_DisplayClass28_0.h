#pragma once
#include <Modloader/app/structs/XalService_c_DisplayClass28_0.h>
#include <Modloader/app/structs/XalService_c_DisplayClass28_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_c_DisplayClass28_0 {
        inline app::XalService_c_DisplayClass28_0__Class** type_info() {
            static app::XalService_c_DisplayClass28_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x0477AC18));
            }
            return cache;
        }
        inline app::XalService_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_c_DisplayClass28_0__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "<>c__DisplayClass28_0");
        }
        inline app::XalService_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::XalService_c_DisplayClass28_0>(get_class());
        }
    } // namespace XalService_c_DisplayClass28_0
} // namespace app::classes::types
