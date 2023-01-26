#pragma once
#include <Modloader/app/structs/SharedReference.h>
#include <Modloader/app/structs/SharedReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedReference {
        inline app::SharedReference__Class** type_info() {
            static app::SharedReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedReference__Class**)(modloader::win::memory::resolve_rva(0x047630D8));
            }
            return cache;
        }
        inline app::SharedReference__Class* get_class() {
            return il2cpp::get_class<app::SharedReference__Class>(type_info(), "System.Text.RegularExpressions", "SharedReference");
        }
        inline app::SharedReference* create() {
            return il2cpp::create_object<app::SharedReference>(get_class());
        }
    } // namespace SharedReference
} // namespace app::classes::types
