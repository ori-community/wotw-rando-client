#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataSetConverter {
        inline app::DataSetConverter__Class** type_info = (app::DataSetConverter__Class**)(modloader::win::memory::resolve_rva(0x0471F3A0));
        inline app::DataSetConverter__Class* get_class() {
            return il2cpp::get_class<app::DataSetConverter__Class>(type_info, "Newtonsoft.Json.Converters", "DataSetConverter");
        }
        inline app::DataSetConverter* create() {
            return il2cpp::create_object<app::DataSetConverter>(get_class());
        }
    } // namespace DataSetConverter
} // namespace app::classes::types
