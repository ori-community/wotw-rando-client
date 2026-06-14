#pragma once
#include <Modloader/app/structs/SharedJsonParser.h>
#include <Modloader/app/structs/SharedJsonParser__Boxed.h>
#include <Modloader/app/structs/SharedJsonParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedJsonParser {
        inline app::SharedJsonParser__Class** type_info() {
            static app::SharedJsonParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedJsonParser__Class**)(modloader::win::memory::resolve_rva(0x04735210));
            }
            return cache;
        }
        inline app::SharedJsonParser__Class* get_class() {
            return il2cpp::get_class<app::SharedJsonParser__Class>(type_info(), "Moon", "SharedJsonParser");
        }
        inline app::SharedJsonParser* create() {
            return il2cpp::create_object<app::SharedJsonParser>(get_class());
        }
        inline app::SharedJsonParser__Boxed* box(app::SharedJsonParser value) {
            return il2cpp::box_value<app::SharedJsonParser__Boxed>(get_class(), value);
        }
    } // namespace SharedJsonParser
} // namespace app::classes::types
