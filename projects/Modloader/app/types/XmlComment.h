#pragma once
#include <Modloader/app/structs/XmlComment.h>
#include <Modloader/app/structs/XmlComment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlComment {
        inline app::XmlComment__Class** type_info() {
            static app::XmlComment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlComment__Class**)(modloader::win::memory::resolve_rva(0x047486E8));
            }
            return cache;
        }
        inline app::XmlComment__Class* get_class() {
            return il2cpp::get_class<app::XmlComment__Class>(type_info(), "System.Xml", "XmlComment");
        }
        inline app::XmlComment* create() {
            return il2cpp::create_object<app::XmlComment>(get_class());
        }
    } // namespace XmlComment
} // namespace app::classes::types
