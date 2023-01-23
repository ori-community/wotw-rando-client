#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsByRefLikeAttribute__Class.h>
#include <Modloader/app/structs/IsByRefLikeAttribute.h>

namespace app::classes::types {
    namespace IsByRefLikeAttribute {
        namespace {
            inline app::IsByRefLikeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IsByRefLikeAttribute__Class** type_info = &type_info_ref;
        inline app::IsByRefLikeAttribute__Class* get_class() {
            return il2cpp::get_class<app::IsByRefLikeAttribute__Class>(type_info, "System.Runtime.CompilerServices", "IsByRefLikeAttribute");
        }
        inline app::IsByRefLikeAttribute* create() {
            return il2cpp::create_object<app::IsByRefLikeAttribute>(get_class());
        }
    } // namespace IsByRefLikeAttribute
} // namespace app::classes::types
