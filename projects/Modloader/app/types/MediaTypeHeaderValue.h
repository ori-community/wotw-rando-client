#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MediaTypeHeaderValue__Class.h>
#include <Modloader/app/structs/MediaTypeHeaderValue.h>

namespace app::classes::types {
    namespace MediaTypeHeaderValue {
        inline app::MediaTypeHeaderValue__Class** type_info = (app::MediaTypeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0476AD10));
        inline app::MediaTypeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "MediaTypeHeaderValue");
        }
        inline app::MediaTypeHeaderValue* create() {
            return il2cpp::create_object<app::MediaTypeHeaderValue>(get_class());
        }
    } // namespace MediaTypeHeaderValue
} // namespace app::classes::types
