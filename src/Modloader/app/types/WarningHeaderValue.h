#pragma once
#include <Modloader/app/structs/WarningHeaderValue.h>
#include <Modloader/app/structs/WarningHeaderValue__Array.h>
#include <Modloader/app/structs/WarningHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WarningHeaderValue {
        inline app::WarningHeaderValue__Class** type_info() {
            static app::WarningHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WarningHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047090C8));
            }
            return cache;
        }
        inline app::WarningHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::WarningHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "WarningHeaderValue");
        }
        inline app::WarningHeaderValue* create() {
            return il2cpp::create_object<app::WarningHeaderValue>(get_class());
        }
        inline app::WarningHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::WarningHeaderValue__Array>(get_class(), size);
        }
        inline app::WarningHeaderValue__Array* create_array(const std::vector<app::WarningHeaderValue*>& items) {
            return il2cpp::array_new<app::WarningHeaderValue__Array>(get_class(), items);
        }
    } // namespace WarningHeaderValue
} // namespace app::classes::types
