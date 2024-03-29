#pragma once
#include <Modloader/app/structs/BooleanConverter.h>
#include <Modloader/app/structs/BooleanConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanConverter {
        inline app::BooleanConverter__Class** type_info() {
            static app::BooleanConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BooleanConverter__Class**)(modloader::win::memory::resolve_rva(0x04769690));
            }
            return cache;
        }
        inline app::BooleanConverter__Class* get_class() {
            return il2cpp::get_class<app::BooleanConverter__Class>(type_info(), "System.ComponentModel", "BooleanConverter");
        }
        inline app::BooleanConverter* create() {
            return il2cpp::create_object<app::BooleanConverter>(get_class());
        }
    } // namespace BooleanConverter
} // namespace app::classes::types
