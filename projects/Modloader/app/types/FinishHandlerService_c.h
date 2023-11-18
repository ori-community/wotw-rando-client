#pragma once
#include <Modloader/app/structs/FinishHandlerService_c.h>
#include <Modloader/app/structs/FinishHandlerService_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinishHandlerService_c {
        inline app::FinishHandlerService_c__Class** type_info() {
            static app::FinishHandlerService_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FinishHandlerService_c__Class**)(modloader::win::memory::resolve_rva(0x0476F280));
            }
            return cache;
        }
        inline app::FinishHandlerService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FinishHandlerService_c__Class>(type_info(), "", "FinishHandlerService", "<>c");
        }
        inline app::FinishHandlerService_c* create() {
            return il2cpp::create_object<app::FinishHandlerService_c>(get_class());
        }
    } // namespace FinishHandlerService_c
} // namespace app::classes::types
