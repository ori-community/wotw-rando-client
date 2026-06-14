#pragma once
#include <Modloader/app/structs/UpaException.h>
#include <Modloader/app/structs/UpaException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpaException {
        inline app::UpaException__Class** type_info() {
            static app::UpaException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpaException__Class**)(modloader::win::memory::resolve_rva(0x047575B0));
            }
            return cache;
        }
        inline app::UpaException__Class* get_class() {
            return il2cpp::get_class<app::UpaException__Class>(type_info(), "System.Xml.Schema", "UpaException");
        }
        inline app::UpaException* create() {
            return il2cpp::create_object<app::UpaException>(get_class());
        }
    } // namespace UpaException
} // namespace app::classes::types
