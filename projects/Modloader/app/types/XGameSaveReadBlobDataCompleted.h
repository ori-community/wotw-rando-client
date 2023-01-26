#pragma once
#include <Modloader/app/structs/XGameSaveReadBlobDataCompleted.h>
#include <Modloader/app/structs/XGameSaveReadBlobDataCompleted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveReadBlobDataCompleted {
        inline app::XGameSaveReadBlobDataCompleted__Class** type_info() {
            static app::XGameSaveReadBlobDataCompleted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveReadBlobDataCompleted__Class**)(modloader::win::memory::resolve_rva(0x04795088));
            }
            return cache;
        }
        inline app::XGameSaveReadBlobDataCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveReadBlobDataCompleted__Class>(type_info(), "XGamingRuntime", "XGameSaveReadBlobDataCompleted");
        }
        inline app::XGameSaveReadBlobDataCompleted* create() {
            return il2cpp::create_object<app::XGameSaveReadBlobDataCompleted>(get_class());
        }
    } // namespace XGameSaveReadBlobDataCompleted
} // namespace app::classes::types
