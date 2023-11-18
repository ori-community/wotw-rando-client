#pragma once
#include <Modloader/app/structs/ParamAttribute.h>
#include <Modloader/app/structs/ParamAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParamAttribute {
        inline app::ParamAttribute__Class** type_info() {
            static app::ParamAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParamAttribute__Class**)(modloader::win::memory::resolve_rva(0x04715518));
            }
            return cache;
        }
        inline app::ParamAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParamAttribute__Class>(type_info(), "Moon.Network.Web", "ParamAttribute");
        }
        inline app::ParamAttribute* create() {
            return il2cpp::create_object<app::ParamAttribute>(get_class());
        }
    } // namespace ParamAttribute
} // namespace app::classes::types
