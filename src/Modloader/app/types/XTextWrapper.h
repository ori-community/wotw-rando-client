#pragma once
#include <Modloader/app/structs/XTextWrapper.h>
#include <Modloader/app/structs/XTextWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTextWrapper {
        inline app::XTextWrapper__Class** type_info() {
            static app::XTextWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XTextWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BA20));
            }
            return cache;
        }
        inline app::XTextWrapper__Class* get_class() {
            return il2cpp::get_class<app::XTextWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XTextWrapper");
        }
        inline app::XTextWrapper* create() {
            return il2cpp::create_object<app::XTextWrapper>(get_class());
        }
    } // namespace XTextWrapper
} // namespace app::classes::types
