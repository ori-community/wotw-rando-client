#pragma once
#include <Modloader/app/structs/XText.h>
#include <Modloader/app/structs/XText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XText {
        inline app::XText__Class** type_info() {
            static app::XText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XText__Class**)(modloader::win::memory::resolve_rva(0x047241B0));
            }
            return cache;
        }
        inline app::XText__Class* get_class() {
            return il2cpp::get_class<app::XText__Class>(type_info(), "System.Xml.Linq", "XText");
        }
        inline app::XText* create() {
            return il2cpp::create_object<app::XText>(get_class());
        }
    } // namespace XText
} // namespace app::classes::types
