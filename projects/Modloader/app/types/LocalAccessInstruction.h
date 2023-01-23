#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalAccessInstruction__Class.h>
#include <Modloader/app/structs/LocalAccessInstruction.h>

namespace app::classes::types {
    namespace LocalAccessInstruction {
        namespace {
            inline app::LocalAccessInstruction__Class* type_info_ref = nullptr;
        }
        inline app::LocalAccessInstruction__Class** type_info = &type_info_ref;
        inline app::LocalAccessInstruction__Class* get_class() {
            return il2cpp::get_class<app::LocalAccessInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalAccessInstruction");
        }
        inline app::LocalAccessInstruction* create() {
            return il2cpp::create_object<app::LocalAccessInstruction>(get_class());
        }
    } // namespace LocalAccessInstruction
} // namespace app::classes::types
