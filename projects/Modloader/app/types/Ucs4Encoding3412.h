#pragma once
#include <Modloader/app/structs/Ucs4Encoding3412.h>
#include <Modloader/app/structs/Ucs4Encoding3412__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding3412 {
        inline app::Ucs4Encoding3412__Class** type_info() {
            static app::Ucs4Encoding3412__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ucs4Encoding3412__Class**)(modloader::win::memory::resolve_rva(0x0471B368));
            }
            return cache;
        }
        inline app::Ucs4Encoding3412__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding3412__Class>(type_info(), "System.Xml", "Ucs4Encoding3412");
        }
        inline app::Ucs4Encoding3412* create() {
            return il2cpp::create_object<app::Ucs4Encoding3412>(get_class());
        }
    } // namespace Ucs4Encoding3412
} // namespace app::classes::types
