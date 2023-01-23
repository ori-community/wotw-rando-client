#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BranchLabel__Class.h>
#include <Modloader/app/structs/BranchLabel.h>
#include <Modloader/app/structs/BranchLabel__Array.h>

namespace app::classes::types {
    namespace BranchLabel {
        inline app::BranchLabel__Class** type_info = (app::BranchLabel__Class**)(modloader::win::memory::resolve_rva(0x0472E128));
        inline app::BranchLabel__Class* get_class() {
            return il2cpp::get_class<app::BranchLabel__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchLabel");
        }
        inline app::BranchLabel* create() {
            return il2cpp::create_object<app::BranchLabel>(get_class());
        }
        inline app::BranchLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::BranchLabel__Array>(get_class(), size);
        }
        inline app::BranchLabel__Array* create_array(const std::vector<app::BranchLabel*>& items) {
            return il2cpp::array_new<app::BranchLabel__Array>(get_class(), items);
        }
    } // namespace BranchLabel
} // namespace app::classes::types
