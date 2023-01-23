#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RangeHeaderValue__Class.h>
#include <Modloader/app/structs/RangeHeaderValue.h>

namespace app::classes::types {
    namespace RangeHeaderValue {
        inline app::RangeHeaderValue__Class** type_info = (app::RangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04730EB0));
        inline app::RangeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeHeaderValue");
        }
        inline app::RangeHeaderValue* create() {
            return il2cpp::create_object<app::RangeHeaderValue>(get_class());
        }
    } // namespace RangeHeaderValue
} // namespace app::classes::types
