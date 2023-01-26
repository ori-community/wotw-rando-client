#pragma once
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/CultureData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureData {
        inline app::CultureData__Class** type_info() {
            static app::CultureData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CultureData__Class**)(modloader::win::memory::resolve_rva(0x04758E60));
            }
            return cache;
        }
        inline app::CultureData__Class* get_class() {
            return il2cpp::get_class<app::CultureData__Class>(type_info(), "System.Globalization", "CultureData");
        }
        inline app::CultureData* create() {
            return il2cpp::create_object<app::CultureData>(get_class());
        }
    } // namespace CultureData
} // namespace app::classes::types
