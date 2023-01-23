#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncodingHelper__Class.h>
#include <Modloader/app/structs/EncodingHelper.h>

namespace app::classes::types {
    namespace EncodingHelper {
        inline app::EncodingHelper__Class** type_info = (app::EncodingHelper__Class**)(modloader::win::memory::resolve_rva(0x04779208));
        inline app::EncodingHelper__Class* get_class() {
            return il2cpp::get_class<app::EncodingHelper__Class>(type_info, "System.Text", "EncodingHelper");
        }
        inline app::EncodingHelper* create() {
            return il2cpp::create_object<app::EncodingHelper>(get_class());
        }
    } // namespace EncodingHelper
} // namespace app::classes::types
