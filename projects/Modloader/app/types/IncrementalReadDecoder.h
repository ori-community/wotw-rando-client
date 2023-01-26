#pragma once
#include <Modloader/app/structs/IncrementalReadDecoder.h>
#include <Modloader/app/structs/IncrementalReadDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementalReadDecoder {
        inline app::IncrementalReadDecoder__Class** type_info() {
            static app::IncrementalReadDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IncrementalReadDecoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IncrementalReadDecoder__Class* get_class() {
            return il2cpp::get_class<app::IncrementalReadDecoder__Class>(type_info(), "System.Xml", "IncrementalReadDecoder");
        }
        inline app::IncrementalReadDecoder* create() {
            return il2cpp::create_object<app::IncrementalReadDecoder>(get_class());
        }
    } // namespace IncrementalReadDecoder
} // namespace app::classes::types
