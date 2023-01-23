#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArgumentNullException__Class.h>
#include <Modloader/app/structs/ArgumentNullException.h>

namespace app::classes::types {
    namespace ArgumentNullException {
        inline app::ArgumentNullException__Class** type_info = (app::ArgumentNullException__Class**)(modloader::win::memory::resolve_rva(0x0477E0A8));
        inline app::ArgumentNullException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentNullException__Class>(type_info, "System", "ArgumentNullException");
        }
        inline app::ArgumentNullException* create() {
            return il2cpp::create_object<app::ArgumentNullException>(get_class());
        }
    } // namespace ArgumentNullException
} // namespace app::classes::types
