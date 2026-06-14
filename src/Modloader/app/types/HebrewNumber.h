#pragma once
#include <Modloader/app/structs/HebrewNumber.h>
#include <Modloader/app/structs/HebrewNumber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber {
        inline app::HebrewNumber__Class** type_info() {
            static app::HebrewNumber__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HebrewNumber__Class**)(modloader::win::memory::resolve_rva(0x04795478));
            }
            return cache;
        }
        inline app::HebrewNumber__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumber__Class>(type_info(), "System.Globalization", "HebrewNumber");
        }
        inline app::HebrewNumber* create() {
            return il2cpp::create_object<app::HebrewNumber>(get_class());
        }
    } // namespace HebrewNumber
} // namespace app::classes::types
