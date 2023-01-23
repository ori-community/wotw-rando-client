#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogBlock__Class.h>
#include <Modloader/app/structs/LogBlock.h>

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
