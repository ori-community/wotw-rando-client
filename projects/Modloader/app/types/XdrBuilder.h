#pragma once
#include <Modloader/app/structs/XdrBuilder.h>
#include <Modloader/app/structs/XdrBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder {
        inline app::XdrBuilder__Class** type_info() {
            static app::XdrBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder__Class**)(modloader::win::memory::resolve_rva(0x04737CB0));
            }
            return cache;
        }
        inline app::XdrBuilder__Class* get_class() {
            return il2cpp::get_class<app::XdrBuilder__Class>(type_info(), "System.Xml.Schema", "XdrBuilder");
        }
        inline app::XdrBuilder* create() {
            return il2cpp::create_object<app::XdrBuilder>(get_class());
        }
    } // namespace XdrBuilder
} // namespace app::classes::types
