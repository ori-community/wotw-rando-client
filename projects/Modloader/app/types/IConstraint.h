#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IConstraint__Class.h>
#include <Modloader/app/structs/IConstraint__Array.h>
#include <Modloader/app/structs/IConstraint.h>

namespace app::classes::types {
    namespace IConstraint {
        inline app::IConstraint__Class** type_info = (app::IConstraint__Class**)(modloader::win::memory::resolve_rva(0x04749108));
        inline app::IConstraint__Class* get_class() {
            return il2cpp::get_class<app::IConstraint__Class>(type_info, "Moon.Timeline.Constraints", "IConstraint");
        }
        inline app::IConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::IConstraint__Array>(get_class(), size);
        }
        inline app::IConstraint__Array* create_array(const std::vector<app::IConstraint*>& items) {
            return il2cpp::array_new<app::IConstraint__Array>(get_class(), items);
        }
    } // namespace IConstraint
} // namespace app::classes::types
