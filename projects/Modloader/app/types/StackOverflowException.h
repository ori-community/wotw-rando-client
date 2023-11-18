#pragma once
#include <Modloader/app/structs/StackOverflowException.h>
#include <Modloader/app/structs/StackOverflowException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackOverflowException {
        inline app::StackOverflowException__Class** type_info() {
            static app::StackOverflowException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StackOverflowException__Class**)(modloader::win::memory::resolve_rva(0x0476EBB8));
            }
            return cache;
        }
        inline app::StackOverflowException__Class* get_class() {
            return il2cpp::get_class<app::StackOverflowException__Class>(type_info(), "System", "StackOverflowException");
        }
        inline app::StackOverflowException* create() {
            return il2cpp::create_object<app::StackOverflowException>(get_class());
        }
    } // namespace StackOverflowException
} // namespace app::classes::types
