#pragma once
#include <Modloader/app/structs/InsufficientExecutionStackException.h>
#include <Modloader/app/structs/InsufficientExecutionStackException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InsufficientExecutionStackException {
        inline app::InsufficientExecutionStackException__Class** type_info() {
            static app::InsufficientExecutionStackException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InsufficientExecutionStackException__Class**)(modloader::win::memory::resolve_rva(0x04756868));
            }
            return cache;
        }
        inline app::InsufficientExecutionStackException__Class* get_class() {
            return il2cpp::get_class<app::InsufficientExecutionStackException__Class>(type_info(), "System", "InsufficientExecutionStackException");
        }
        inline app::InsufficientExecutionStackException* create() {
            return il2cpp::create_object<app::InsufficientExecutionStackException>(get_class());
        }
    } // namespace InsufficientExecutionStackException
} // namespace app::classes::types
