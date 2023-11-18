#pragma once
#include <Modloader/app/structs/LogCallbackData.h>
#include <Modloader/app/structs/LogCallbackData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogCallbackData {
        inline app::LogCallbackData__Class** type_info() {
            static app::LogCallbackData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogCallbackData__Class**)(modloader::win::memory::resolve_rva(0x0478D908));
            }
            return cache;
        }
        inline app::LogCallbackData__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackData__Class>(type_info(), "", "LogCallbackData");
        }
        inline app::LogCallbackData* create() {
            return il2cpp::create_object<app::LogCallbackData>(get_class());
        }
    } // namespace LogCallbackData
} // namespace app::classes::types
