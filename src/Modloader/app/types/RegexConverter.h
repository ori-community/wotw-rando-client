#pragma once
#include <Modloader/app/structs/RegexConverter.h>
#include <Modloader/app/structs/RegexConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexConverter {
        inline app::RegexConverter__Class** type_info() {
            static app::RegexConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexConverter__Class**)(modloader::win::memory::resolve_rva(0x047348F8));
            }
            return cache;
        }
        inline app::RegexConverter__Class* get_class() {
            return il2cpp::get_class<app::RegexConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "RegexConverter");
        }
        inline app::RegexConverter* create() {
            return il2cpp::create_object<app::RegexConverter>(get_class());
        }
    } // namespace RegexConverter
} // namespace app::classes::types
