#pragma once
#include <Modloader/app/structs/XComment.h>
#include <Modloader/app/structs/XComment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XComment {
        inline app::XComment__Class** type_info() {
            static app::XComment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XComment__Class**)(modloader::win::memory::resolve_rva(0x0471FFB8));
            }
            return cache;
        }
        inline app::XComment__Class* get_class() {
            return il2cpp::get_class<app::XComment__Class>(type_info(), "System.Xml.Linq", "XComment");
        }
        inline app::XComment* create() {
            return il2cpp::create_object<app::XComment>(get_class());
        }
    } // namespace XComment
} // namespace app::classes::types
