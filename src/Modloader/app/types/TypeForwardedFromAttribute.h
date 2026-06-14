#pragma once
#include <Modloader/app/structs/TypeForwardedFromAttribute.h>
#include <Modloader/app/structs/TypeForwardedFromAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeForwardedFromAttribute {
        inline app::TypeForwardedFromAttribute__Class** type_info() {
            static app::TypeForwardedFromAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeForwardedFromAttribute__Class**)(modloader::win::memory::resolve_rva(0x04775E80));
            }
            return cache;
        }
        inline app::TypeForwardedFromAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeForwardedFromAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
        }
        inline app::TypeForwardedFromAttribute* create() {
            return il2cpp::create_object<app::TypeForwardedFromAttribute>(get_class());
        }
    } // namespace TypeForwardedFromAttribute
} // namespace app::classes::types
