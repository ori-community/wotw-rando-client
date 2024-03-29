#pragma once
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/Decimal__Boxed.h>
#include <Modloader/app/structs/Decimal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Decimal {
        inline app::Decimal__Class** type_info() {
            static app::Decimal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Decimal__Class**)(modloader::win::memory::resolve_rva(0x04770388));
            }
            return cache;
        }
        inline app::Decimal__Class* get_class() {
            return il2cpp::get_class<app::Decimal__Class>(type_info(), "System", "Decimal");
        }
        inline app::Decimal* create() {
            return il2cpp::create_object<app::Decimal>(get_class());
        }
        inline app::Decimal__Boxed* box(app::Decimal value) {
            return il2cpp::box_value<app::Decimal__Boxed>(get_class(), value);
        }
        inline app::Decimal__Array* create_array(int size) {
            return il2cpp::array_new<app::Decimal__Array>(get_class(), size);
        }
        inline app::Decimal__Array* create_array(const std::vector<app::Decimal>& items) {
            return il2cpp::array_new<app::Decimal__Array>(get_class(), items);
        }
    } // namespace Decimal
} // namespace app::classes::types
