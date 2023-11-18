#pragma once
#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/Decimal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Decimal__Array {
        inline app::Decimal__Array__Class** type_info() {
            static app::Decimal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Decimal__Array__Class**)(modloader::win::memory::resolve_rva(0x04753EB8));
            }
            return cache;
        }
        inline app::Decimal__Array__Class* get_class() {
            return il2cpp::get_class<app::Decimal__Array__Class>(type_info(), "System", "Decimal[]");
        }
        inline app::Decimal__Array* create() {
            return il2cpp::create_object<app::Decimal__Array>(get_class());
        }
    } // namespace Decimal__Array
} // namespace app::classes::types
