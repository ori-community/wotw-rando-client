#pragma once
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/UInt64__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt64__Array {
        inline app::UInt64__Array__Class** type_info() {
            static app::UInt64__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt64__Array__Class**)(modloader::win::memory::resolve_rva(0x04772828));
            }
            return cache;
        }
        inline app::UInt64__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt64__Array__Class>(type_info(), "System", "UInt64[]");
        }
        inline app::UInt64__Array* create() {
            return il2cpp::create_object<app::UInt64__Array>(get_class());
        }
    } // namespace UInt64__Array
} // namespace app::classes::types
