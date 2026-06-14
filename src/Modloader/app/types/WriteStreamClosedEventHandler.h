#pragma once
#include <Modloader/app/structs/WriteStreamClosedEventHandler.h>
#include <Modloader/app/structs/WriteStreamClosedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteStreamClosedEventHandler {
        inline app::WriteStreamClosedEventHandler__Class** type_info() {
            static app::WriteStreamClosedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteStreamClosedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteStreamClosedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::WriteStreamClosedEventHandler__Class>(type_info(), "System.Net", "WriteStreamClosedEventHandler");
        }
        inline app::WriteStreamClosedEventHandler* create() {
            return il2cpp::create_object<app::WriteStreamClosedEventHandler>(get_class());
        }
    } // namespace WriteStreamClosedEventHandler
} // namespace app::classes::types
