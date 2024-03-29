#pragma once
#include <Modloader/app/structs/LogItem.h>
#include <Modloader/app/structs/LogItem__Array.h>
#include <Modloader/app/structs/LogItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogItem {
        inline app::LogItem__Class** type_info() {
            static app::LogItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogItem__Class**)(modloader::win::memory::resolve_rva(0x047133C0));
            }
            return cache;
        }
        inline app::LogItem__Class* get_class() {
            return il2cpp::get_class<app::LogItem__Class>(type_info(), "TriangleNet.Logging", "LogItem");
        }
        inline app::LogItem* create() {
            return il2cpp::create_object<app::LogItem>(get_class());
        }
        inline app::LogItem__Array* create_array(int size) {
            return il2cpp::array_new<app::LogItem__Array>(get_class(), size);
        }
        inline app::LogItem__Array* create_array(const std::vector<app::LogItem*>& items) {
            return il2cpp::array_new<app::LogItem__Array>(get_class(), items);
        }
    } // namespace LogItem
} // namespace app::classes::types
