#pragma once
#include <Modloader/app/structs/ContentDispositionHeaderValue.h>
#include <Modloader/app/structs/ContentDispositionHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentDispositionHeaderValue {
        inline app::ContentDispositionHeaderValue__Class** type_info() {
            static app::ContentDispositionHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContentDispositionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047597D8));
            }
            return cache;
        }
        inline app::ContentDispositionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ContentDispositionHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "ContentDispositionHeaderValue");
        }
        inline app::ContentDispositionHeaderValue* create() {
            return il2cpp::create_object<app::ContentDispositionHeaderValue>(get_class());
        }
    } // namespace ContentDispositionHeaderValue
} // namespace app::classes::types
