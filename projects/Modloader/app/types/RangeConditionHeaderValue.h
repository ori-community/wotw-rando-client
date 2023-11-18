#pragma once
#include <Modloader/app/structs/RangeConditionHeaderValue.h>
#include <Modloader/app/structs/RangeConditionHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeConditionHeaderValue {
        inline app::RangeConditionHeaderValue__Class** type_info() {
            static app::RangeConditionHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RangeConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04737220));
            }
            return cache;
        }
        inline app::RangeConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeConditionHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "RangeConditionHeaderValue");
        }
        inline app::RangeConditionHeaderValue* create() {
            return il2cpp::create_object<app::RangeConditionHeaderValue>(get_class());
        }
    } // namespace RangeConditionHeaderValue
} // namespace app::classes::types
