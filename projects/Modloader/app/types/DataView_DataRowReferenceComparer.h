#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataView_DataRowReferenceComparer {
        inline app::DataView_DataRowReferenceComparer__Class** type_info = (app::DataView_DataRowReferenceComparer__Class**)(modloader::win::memory::resolve_rva(0x047982B0));
        inline app::DataView_DataRowReferenceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DataView_DataRowReferenceComparer__Class>(type_info, "System.Data", "DataView", "DataRowReferenceComparer");
        }
        inline app::DataView_DataRowReferenceComparer* create() {
            return il2cpp::create_object<app::DataView_DataRowReferenceComparer>(get_class());
        }
    } // namespace DataView_DataRowReferenceComparer
} // namespace app::classes::types
