#pragma once
#include <Modloader/app/structs/LogBlock.h>
#include <Modloader/app/structs/LogBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogBlock {
        inline app::LogBlock__Class** type_info() {
            static app::LogBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogBlock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogBlock__Class* get_class() {
            return il2cpp::get_class<app::LogBlock__Class>(type_info(), "Moon.ContinuousIntegration", "LogBlock");
        }
        inline app::LogBlock* create() {
            return il2cpp::create_object<app::LogBlock>(get_class());
        }
    } // namespace LogBlock
} // namespace app::classes::types
