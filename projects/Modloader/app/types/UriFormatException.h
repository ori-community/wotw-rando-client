#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UriFormatException__Class.h>
#include <Modloader/app/structs/UriFormatException.h>

namespace app::classes::types {
    namespace UriFormatException {
        inline app::UriFormatException__Class** type_info = (app::UriFormatException__Class**)(modloader::win::memory::resolve_rva(0x0477C668));
        inline app::UriFormatException__Class* get_class() {
            return il2cpp::get_class<app::UriFormatException__Class>(type_info, "System", "UriFormatException");
        }
        inline app::UriFormatException* create() {
            return il2cpp::create_object<app::UriFormatException>(get_class());
        }
    } // namespace UriFormatException
} // namespace app::classes::types
