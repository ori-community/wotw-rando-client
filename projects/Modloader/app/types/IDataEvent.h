#pragma once
#include <Modloader/app/structs/IDataEvent.h>
#include <Modloader/app/structs/IDataEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDataEvent {
        inline app::IDataEvent__Class** type_info() {
            static app::IDataEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDataEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDataEvent__Class* get_class() {
            return il2cpp::get_class<app::IDataEvent__Class>(type_info(), "", "IDataEvent");
        }
    } // namespace IDataEvent
} // namespace app::classes::types
