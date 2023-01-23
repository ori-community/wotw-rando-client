#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidatingReaderNodeData__Class.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/ValidatingReaderNodeData__Array.h>

namespace app::classes::types {
    namespace ValidatingReaderNodeData {
        inline app::ValidatingReaderNodeData__Class** type_info = (app::ValidatingReaderNodeData__Class**)(modloader::win::memory::resolve_rva(0x0476DF70));
        inline app::ValidatingReaderNodeData__Class* get_class() {
            return il2cpp::get_class<app::ValidatingReaderNodeData__Class>(type_info, "System.Xml", "ValidatingReaderNodeData");
        }
        inline app::ValidatingReaderNodeData* create() {
            return il2cpp::create_object<app::ValidatingReaderNodeData>(get_class());
        }
        inline app::ValidatingReaderNodeData__Array* create_array(int size) {
            return il2cpp::array_new<app::ValidatingReaderNodeData__Array>(get_class(), size);
        }
        inline app::ValidatingReaderNodeData__Array* create_array(const std::vector<app::ValidatingReaderNodeData*>& items) {
            return il2cpp::array_new<app::ValidatingReaderNodeData__Array>(get_class(), items);
        }
    } // namespace ValidatingReaderNodeData
} // namespace app::classes::types
