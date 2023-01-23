#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectReader_TypeNAssembly__Class.h>
#include <Modloader/app/structs/ObjectReader_TypeNAssembly.h>

namespace app::classes::types {
    namespace ObjectReader_TypeNAssembly {
        inline app::ObjectReader_TypeNAssembly__Class** type_info = (app::ObjectReader_TypeNAssembly__Class**)(modloader::win::memory::resolve_rva(0x047751C8));
        inline app::ObjectReader_TypeNAssembly__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectReader_TypeNAssembly__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader", "TypeNAssembly");
        }
        inline app::ObjectReader_TypeNAssembly* create() {
            return il2cpp::create_object<app::ObjectReader_TypeNAssembly>(get_class());
        }
    } // namespace ObjectReader_TypeNAssembly
} // namespace app::classes::types
