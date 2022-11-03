#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Instruction {
        namespace {
            inline app::Instruction__Class* type_info_ref = nullptr;
        }
        inline app::Instruction__Class** type_info = &type_info_ref;
        inline app::Instruction__Class* get_class() {
            return il2cpp::get_class<app::Instruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "Instruction");
        }
        inline app::Instruction* create() {
            return il2cpp::create_object<app::Instruction>(get_class());
        }
        inline app::Instruction__Array* create_array(int size) {
            return il2cpp::array_new<app::Instruction__Array>(get_class(), size);
        }
        inline app::Instruction__Array* create_array(const std::vector<app::Instruction*>& items) {
            return il2cpp::array_new<app::Instruction__Array>(get_class(), items);
        }
    } // namespace Instruction
} // namespace app::classes::types
