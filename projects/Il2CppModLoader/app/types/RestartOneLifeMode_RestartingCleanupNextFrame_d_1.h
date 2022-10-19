#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestartOneLifeMode_RestartingCleanupNextFrame_d_1 {
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class** type_info = (app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class**)(modloader::win::memory::resolve_rva(0x04791950));
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class>(type_info, "", "RestartOneLifeMode", "<RestartingCleanupNextFrame>d__1");
        }
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1* create() {
            return il2cpp::create_object<app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1>(get_class());
        }
    } // namespace RestartOneLifeMode_RestartingCleanupNextFrame_d_1
} // namespace app::classes::types
