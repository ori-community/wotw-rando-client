#pragma once
#include <Modloader/app/structs/OperationCanceledException.h>
#include <Modloader/app/structs/OperationCanceledException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OperationCanceledException {
        inline app::OperationCanceledException__Class** type_info() {
            static app::OperationCanceledException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OperationCanceledException__Class**)(modloader::win::memory::resolve_rva(0x0475A7B0));
            }
            return cache;
        }
        inline app::OperationCanceledException__Class* get_class() {
            return il2cpp::get_class<app::OperationCanceledException__Class>(type_info(), "System", "OperationCanceledException");
        }
        inline app::OperationCanceledException* create() {
            return il2cpp::create_object<app::OperationCanceledException>(get_class());
        }
    } // namespace OperationCanceledException
} // namespace app::classes::types
