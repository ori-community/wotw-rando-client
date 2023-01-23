#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateGroupData__Class.h>
#include <Modloader/app/structs/UberStateGroupData.h>
#include <Modloader/app/structs/UberStateGroupData__Boxed.h>
#include <Modloader/app/structs/UberStateGroupData__Array.h>

namespace app::classes::types {
    namespace UberStateGroupData {
        inline app::UberStateGroupData__Class** type_info = (app::UberStateGroupData__Class**)(modloader::win::memory::resolve_rva(0x0477B010));
        inline app::UberStateGroupData__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroupData__Class>(type_info, "Moon.UberStateVisualization", "UberStateGroupData");
        }
        inline app::UberStateGroupData* create() {
            return il2cpp::create_object<app::UberStateGroupData>(get_class());
        }
        inline app::UberStateGroupData__Boxed* box(app::UberStateGroupData value) {
            return il2cpp::box_value<app::UberStateGroupData__Boxed>(get_class(), value);
        }
        inline app::UberStateGroupData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateGroupData__Array>(get_class(), size);
        }
        inline app::UberStateGroupData__Array* create_array(const std::vector<app::UberStateGroupData>& items) {
            return il2cpp::array_new<app::UberStateGroupData__Array>(get_class(), items);
        }
    } // namespace UberStateGroupData
} // namespace app::classes::types
