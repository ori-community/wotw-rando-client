#pragma once
#include <Modloader/app/structs/TimeSpanParse.h>
#include <Modloader/app/structs/TimeSpanParse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse {
        inline app::TimeSpanParse__Class** type_info() {
            static app::TimeSpanParse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSpanParse__Class**)(modloader::win::memory::resolve_rva(0x04772510));
            }
            return cache;
        }
        inline app::TimeSpanParse__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanParse__Class>(type_info(), "System.Globalization", "TimeSpanParse");
        }
        inline app::TimeSpanParse* create() {
            return il2cpp::create_object<app::TimeSpanParse>(get_class());
        }
    } // namespace TimeSpanParse
} // namespace app::classes::types
