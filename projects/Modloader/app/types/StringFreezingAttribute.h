#pragma once
#include <Modloader/app/structs/StringFreezingAttribute.h>
#include <Modloader/app/structs/StringFreezingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringFreezingAttribute {
        inline app::StringFreezingAttribute__Class** type_info() {
            static app::StringFreezingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringFreezingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringFreezingAttribute__Class* get_class() {
            return il2cpp::get_class<app::StringFreezingAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "StringFreezingAttribute");
        }
        inline app::StringFreezingAttribute* create() {
            return il2cpp::create_object<app::StringFreezingAttribute>(get_class());
        }
    } // namespace StringFreezingAttribute
} // namespace app::classes::types
