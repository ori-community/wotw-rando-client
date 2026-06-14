#pragma once
#include <Modloader/app/structs/MediaTypeHeaderValue.h>
#include <Modloader/app/structs/MediaTypeHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MediaTypeHeaderValue {
        inline app::MediaTypeHeaderValue__Class** type_info() {
            static app::MediaTypeHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MediaTypeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0476AD10));
            }
            return cache;
        }
        inline app::MediaTypeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "MediaTypeHeaderValue");
        }
        inline app::MediaTypeHeaderValue* create() {
            return il2cpp::create_object<app::MediaTypeHeaderValue>(get_class());
        }
    } // namespace MediaTypeHeaderValue
} // namespace app::classes::types
