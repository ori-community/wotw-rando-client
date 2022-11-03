#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogCallbackData {
        inline app::LogCallbackData__Class** type_info = (app::LogCallbackData__Class**)(modloader::win::memory::resolve_rva(0x0478D908));
        inline app::LogCallbackData__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackData__Class>(type_info, "", "LogCallbackData");
        }
        inline app::LogCallbackData* create() {
            return il2cpp::create_object<app::LogCallbackData>(get_class());
        }
    } // namespace LogCallbackData
} // namespace app::classes::types
