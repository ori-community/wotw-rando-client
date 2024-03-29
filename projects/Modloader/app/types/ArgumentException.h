#pragma once
#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/ArgumentException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArgumentException {
        inline app::ArgumentException__Class** type_info() {
            static app::ArgumentException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArgumentException__Class**)(modloader::win::memory::resolve_rva(0x04749B38));
            }
            return cache;
        }
        inline app::ArgumentException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentException__Class>(type_info(), "System", "ArgumentException");
        }
        inline app::ArgumentException* create() {
            return il2cpp::create_object<app::ArgumentException>(get_class());
        }
    } // namespace ArgumentException
} // namespace app::classes::types
