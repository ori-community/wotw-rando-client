#pragma once
#include <Modloader/app/structs/ContentRangeHeaderValue.h>
#include <Modloader/app/structs/ContentRangeHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentRangeHeaderValue {
        inline app::ContentRangeHeaderValue__Class** type_info() {
            static app::ContentRangeHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContentRangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047475F8));
            }
            return cache;
        }
        inline app::ContentRangeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ContentRangeHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "ContentRangeHeaderValue");
        }
        inline app::ContentRangeHeaderValue* create() {
            return il2cpp::create_object<app::ContentRangeHeaderValue>(get_class());
        }
    } // namespace ContentRangeHeaderValue
} // namespace app::classes::types
