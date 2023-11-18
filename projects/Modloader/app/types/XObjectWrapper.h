#pragma once
#include <Modloader/app/structs/XObjectWrapper.h>
#include <Modloader/app/structs/XObjectWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XObjectWrapper {
        inline app::XObjectWrapper__Class** type_info() {
            static app::XObjectWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XObjectWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472E138));
            }
            return cache;
        }
        inline app::XObjectWrapper__Class* get_class() {
            return il2cpp::get_class<app::XObjectWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XObjectWrapper");
        }
        inline app::XObjectWrapper* create() {
            return il2cpp::create_object<app::XObjectWrapper>(get_class());
        }
    } // namespace XObjectWrapper
} // namespace app::classes::types
