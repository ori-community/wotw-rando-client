#pragma once
#include <Modloader/app/structs/IsByRefLikeAttribute.h>
#include <Modloader/app/structs/IsByRefLikeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsByRefLikeAttribute {
        inline app::IsByRefLikeAttribute__Class** type_info() {
            static app::IsByRefLikeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsByRefLikeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsByRefLikeAttribute__Class* get_class() {
            return il2cpp::get_class<app::IsByRefLikeAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "IsByRefLikeAttribute");
        }
        inline app::IsByRefLikeAttribute* create() {
            return il2cpp::create_object<app::IsByRefLikeAttribute>(get_class());
        }
    } // namespace IsByRefLikeAttribute
} // namespace app::classes::types
