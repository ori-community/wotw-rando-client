#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostGenericResourceAttribute__Array {
        namespace {
            inline app::GhostGenericResourceAttribute__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostGenericResourceAttribute__Array__Class** type_info = &type_info_ref;
        inline app::GhostGenericResourceAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericResourceAttribute__Array__Class>(type_info, "", "GhostGenericResourceAttribute[]");
        }
        inline app::GhostGenericResourceAttribute__Array* create() {
            return il2cpp::create_object<app::GhostGenericResourceAttribute__Array>(get_class());
        }
    } // namespace GhostGenericResourceAttribute__Array
} // namespace app::classes::types
