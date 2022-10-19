#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastMemoryFlags__Enum {
        namespace {
            inline app::FastMemoryFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FastMemoryFlags__Enum__Class** type_info = &type_info_ref;
        inline app::FastMemoryFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::FastMemoryFlags__Enum__Class>(type_info, "UnityEngine", "FastMemoryFlags");
        }
        inline app::FastMemoryFlags__Enum* create() {
            return il2cpp::create_object<app::FastMemoryFlags__Enum>(get_class());
        }
    } // namespace FastMemoryFlags__Enum
} // namespace app::classes::types
