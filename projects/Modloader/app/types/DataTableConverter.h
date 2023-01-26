#pragma once
#include <Modloader/app/structs/DataTableConverter.h>
#include <Modloader/app/structs/DataTableConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableConverter {
        inline app::DataTableConverter__Class** type_info() {
            static app::DataTableConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTableConverter__Class**)(modloader::win::memory::resolve_rva(0x04765830));
            }
            return cache;
        }
        inline app::DataTableConverter__Class* get_class() {
            return il2cpp::get_class<app::DataTableConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "DataTableConverter");
        }
        inline app::DataTableConverter* create() {
            return il2cpp::create_object<app::DataTableConverter>(get_class());
        }
    } // namespace DataTableConverter
} // namespace app::classes::types
