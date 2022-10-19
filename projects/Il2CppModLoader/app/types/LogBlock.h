#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogBlock {
        namespace {
            inline app::LogBlock__Class* type_info_ref = nullptr;
        }
        inline app::LogBlock__Class** type_info = &type_info_ref;
        inline app::LogBlock__Class* get_class() {
            return il2cpp::get_class<app::LogBlock__Class>(type_info, "Moon.ContinuousIntegration", "LogBlock");
        }
        inline app::LogBlock* create() {
            return il2cpp::create_object<app::LogBlock>(get_class());
        }
    } // namespace LogBlock
} // namespace app::classes::types
