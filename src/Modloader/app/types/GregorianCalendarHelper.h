#pragma once
#include <Modloader/app/structs/GregorianCalendarHelper.h>
#include <Modloader/app/structs/GregorianCalendarHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GregorianCalendarHelper {
        inline app::GregorianCalendarHelper__Class** type_info() {
            static app::GregorianCalendarHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GregorianCalendarHelper__Class**)(modloader::win::memory::resolve_rva(0x047314B0));
            }
            return cache;
        }
        inline app::GregorianCalendarHelper__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendarHelper__Class>(type_info(), "System.Globalization", "GregorianCalendarHelper");
        }
        inline app::GregorianCalendarHelper* create() {
            return il2cpp::create_object<app::GregorianCalendarHelper>(get_class());
        }
    } // namespace GregorianCalendarHelper
} // namespace app::classes::types
