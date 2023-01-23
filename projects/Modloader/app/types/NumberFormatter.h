#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NumberFormatter__Class.h>
#include <Modloader/app/structs/NumberFormatter.h>

namespace app::classes::types {
    namespace NumberFormatter {
        inline app::NumberFormatter__Class** type_info = (app::NumberFormatter__Class**)(modloader::win::memory::resolve_rva(0x04729C38));
        inline app::NumberFormatter__Class* get_class() {
            return il2cpp::get_class<app::NumberFormatter__Class>(type_info, "System", "NumberFormatter");
        }
        inline app::NumberFormatter* create() {
            return il2cpp::create_object<app::NumberFormatter>(get_class());
        }
    } // namespace NumberFormatter
} // namespace app::classes::types
