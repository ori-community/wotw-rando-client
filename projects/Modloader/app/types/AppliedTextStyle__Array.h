#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AppliedTextStyle__Array__Class.h>
#include <Modloader/app/structs/AppliedTextStyle__Array.h>

namespace app::classes::types {
    namespace AppliedTextStyle__Array {
        namespace {
            inline app::AppliedTextStyle__Array__Class* type_info_ref = nullptr;
        }
        inline app::AppliedTextStyle__Array__Class** type_info = &type_info_ref;
        inline app::AppliedTextStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::AppliedTextStyle__Array__Class>(type_info, "CatlikeCoding.TextBox", "AppliedTextStyle[]");
        }
        inline app::AppliedTextStyle__Array* create() {
            return il2cpp::create_object<app::AppliedTextStyle__Array>(get_class());
        }
    } // namespace AppliedTextStyle__Array
} // namespace app::classes::types
