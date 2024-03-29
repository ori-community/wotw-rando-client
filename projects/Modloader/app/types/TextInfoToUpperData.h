#pragma once
#include <Modloader/app/structs/TextInfoToUpperData.h>
#include <Modloader/app/structs/TextInfoToUpperData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextInfoToUpperData {
        inline app::TextInfoToUpperData__Class** type_info() {
            static app::TextInfoToUpperData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextInfoToUpperData__Class**)(modloader::win::memory::resolve_rva(0x04753B50));
            }
            return cache;
        }
        inline app::TextInfoToUpperData__Class* get_class() {
            return il2cpp::get_class<app::TextInfoToUpperData__Class>(type_info(), "System.Globalization", "TextInfoToUpperData");
        }
        inline app::TextInfoToUpperData* create() {
            return il2cpp::create_object<app::TextInfoToUpperData>(get_class());
        }
    } // namespace TextInfoToUpperData
} // namespace app::classes::types
