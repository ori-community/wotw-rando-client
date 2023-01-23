#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DtdValidator__Class.h>
#include <Modloader/app/structs/DtdValidator.h>

namespace app::classes::types {
    namespace DtdValidator {
        inline app::DtdValidator__Class** type_info = (app::DtdValidator__Class**)(modloader::win::memory::resolve_rva(0x04730D50));
        inline app::DtdValidator__Class* get_class() {
            return il2cpp::get_class<app::DtdValidator__Class>(type_info, "System.Xml.Schema", "DtdValidator");
        }
        inline app::DtdValidator* create() {
            return il2cpp::create_object<app::DtdValidator>(get_class());
        }
    } // namespace DtdValidator
} // namespace app::classes::types
