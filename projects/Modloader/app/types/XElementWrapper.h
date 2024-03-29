#pragma once
#include <Modloader/app/structs/XElementWrapper.h>
#include <Modloader/app/structs/XElementWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementWrapper {
        inline app::XElementWrapper__Class** type_info() {
            static app::XElementWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BBE8));
            }
            return cache;
        }
        inline app::XElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XElementWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XElementWrapper");
        }
        inline app::XElementWrapper* create() {
            return il2cpp::create_object<app::XElementWrapper>(get_class());
        }
    } // namespace XElementWrapper
} // namespace app::classes::types
