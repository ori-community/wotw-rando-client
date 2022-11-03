#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContentDispositionHeaderValue {
        inline app::ContentDispositionHeaderValue__Class** type_info = (app::ContentDispositionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047597D8));
        inline app::ContentDispositionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ContentDispositionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
        }
        inline app::ContentDispositionHeaderValue* create() {
            return il2cpp::create_object<app::ContentDispositionHeaderValue>(get_class());
        }
    } // namespace ContentDispositionHeaderValue
} // namespace app::classes::types
