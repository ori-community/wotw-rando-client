#pragma once
#include <Modloader/app/structs/RestartOneLifeMode_RestartingCleanupNextFrame_d_1.h>
#include <Modloader/app/structs/RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestartOneLifeMode_RestartingCleanupNextFrame_d_1 {
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class** type_info() {
            static app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class**)(modloader::win::memory::resolve_rva(0x04791950));
            }
            return cache;
        }
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class>(type_info(), "", "RestartOneLifeMode", "<RestartingCleanupNextFrame>d__1");
        }
        inline app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1* create() {
            return il2cpp::create_object<app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1>(get_class());
        }
    } // namespace RestartOneLifeMode_RestartingCleanupNextFrame_d_1
} // namespace app::classes::types
