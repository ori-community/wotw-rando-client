#pragma once
#include <Modloader/app/structs/RangeItemHeaderValue.h>
#include <Modloader/app/structs/RangeItemHeaderValue__Array.h>
#include <Modloader/app/structs/RangeItemHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeItemHeaderValue {
        inline app::RangeItemHeaderValue__Class** type_info() {
            static app::RangeItemHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RangeItemHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0472A908));
            }
            return cache;
        }
        inline app::RangeItemHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeItemHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "RangeItemHeaderValue");
        }
        inline app::RangeItemHeaderValue* create() {
            return il2cpp::create_object<app::RangeItemHeaderValue>(get_class());
        }
        inline app::RangeItemHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::RangeItemHeaderValue__Array>(get_class(), size);
        }
        inline app::RangeItemHeaderValue__Array* create_array(const std::vector<app::RangeItemHeaderValue*>& items) {
            return il2cpp::array_new<app::RangeItemHeaderValue__Array>(get_class(), items);
        }
    } // namespace RangeItemHeaderValue
} // namespace app::classes::types
