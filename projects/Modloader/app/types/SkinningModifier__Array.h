#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkinningModifier__Array__Class.h>
#include <Modloader/app/structs/SkinningModifier__Array.h>

namespace app::classes::types {
    namespace SkinningModifier__Array {
        namespace {
            inline app::SkinningModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkinningModifier__Array__Class** type_info = &type_info_ref;
        inline app::SkinningModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinningModifier__Array__Class>(type_info, "", "SkinningModifier[]");
        }
        inline app::SkinningModifier__Array* create() {
            return il2cpp::create_object<app::SkinningModifier__Array>(get_class());
        }
    } // namespace SkinningModifier__Array
} // namespace app::classes::types
