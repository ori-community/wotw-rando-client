#pragma once
#include <Modloader/app/structs/RetryConditionHeaderValue.h>
#include <Modloader/app/structs/RetryConditionHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetryConditionHeaderValue {
        inline app::RetryConditionHeaderValue__Class** type_info() {
            static app::RetryConditionHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RetryConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0470B548));
            }
            return cache;
        }
        inline app::RetryConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RetryConditionHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "RetryConditionHeaderValue");
        }
        inline app::RetryConditionHeaderValue* create() {
            return il2cpp::create_object<app::RetryConditionHeaderValue>(get_class());
        }
    } // namespace RetryConditionHeaderValue
} // namespace app::classes::types
