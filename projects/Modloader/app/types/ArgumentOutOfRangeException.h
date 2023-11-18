#pragma once
#include <Modloader/app/structs/ArgumentOutOfRangeException.h>
#include <Modloader/app/structs/ArgumentOutOfRangeException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArgumentOutOfRangeException {
        inline app::ArgumentOutOfRangeException__Class** type_info() {
            static app::ArgumentOutOfRangeException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArgumentOutOfRangeException__Class**)(modloader::win::memory::resolve_rva(0x047918E0));
            }
            return cache;
        }
        inline app::ArgumentOutOfRangeException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentOutOfRangeException__Class>(type_info(), "System", "ArgumentOutOfRangeException");
        }
        inline app::ArgumentOutOfRangeException* create() {
            return il2cpp::create_object<app::ArgumentOutOfRangeException>(get_class());
        }
    } // namespace ArgumentOutOfRangeException
} // namespace app::classes::types
