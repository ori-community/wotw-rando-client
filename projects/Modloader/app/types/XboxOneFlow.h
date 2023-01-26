#pragma once
#include <Modloader/app/structs/XboxOneFlow.h>
#include <Modloader/app/structs/XboxOneFlow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneFlow {
        inline app::XboxOneFlow__Class** type_info() {
            static app::XboxOneFlow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneFlow__Class**)(modloader::win::memory::resolve_rva(0x04786660));
            }
            return cache;
        }
        inline app::XboxOneFlow__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFlow__Class>(type_info(), "", "XboxOneFlow");
        }
        inline app::XboxOneFlow* create() {
            return il2cpp::create_object<app::XboxOneFlow>(get_class());
        }
    } // namespace XboxOneFlow
} // namespace app::classes::types
