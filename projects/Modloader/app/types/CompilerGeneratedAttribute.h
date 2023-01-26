#pragma once
#include <Modloader/app/structs/CompilerGeneratedAttribute.h>
#include <Modloader/app/structs/CompilerGeneratedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompilerGeneratedAttribute {
        inline app::CompilerGeneratedAttribute__Class** type_info() {
            static app::CompilerGeneratedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompilerGeneratedAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompilerGeneratedAttribute__Class* get_class() {
            return il2cpp::get_class<app::CompilerGeneratedAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
        }
        inline app::CompilerGeneratedAttribute* create() {
            return il2cpp::create_object<app::CompilerGeneratedAttribute>(get_class());
        }
    } // namespace CompilerGeneratedAttribute
} // namespace app::classes::types
