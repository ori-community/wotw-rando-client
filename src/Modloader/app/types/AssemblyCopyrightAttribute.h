#pragma once
#include <Modloader/app/structs/AssemblyCopyrightAttribute.h>
#include <Modloader/app/structs/AssemblyCopyrightAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyCopyrightAttribute {
        inline app::AssemblyCopyrightAttribute__Class** type_info() {
            static app::AssemblyCopyrightAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyCopyrightAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyCopyrightAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCopyrightAttribute__Class>(type_info(), "System.Reflection", "AssemblyCopyrightAttribute");
        }
        inline app::AssemblyCopyrightAttribute* create() {
            return il2cpp::create_object<app::AssemblyCopyrightAttribute>(get_class());
        }
    } // namespace AssemblyCopyrightAttribute
} // namespace app::classes::types
